class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
//         vector<int> res;
//         vector<bool> ans;
//         int flg =0;
//         for(int i=0;i<l.size();i++)
//         {
//             flg =0;
//              res.clear();
//             for(int j = l[i];j<=r[i];j++)
//             {
//                 res.push_back(nums[j]);
//             }
            
//             sort(res.begin(),res.end());
//             int n = res[1]-res[0];
//             for(int i=0;i<res.size()-1;i++)
//             {
//                 if(res[i+1]-res[i] != n)
//                 {
//                     ans.push_back(false);
//                     flg = 1;
//                     break;
//                 }
//             }
//             if(flg == 0)
//             {
//                 ans.push_back(true);
//             }
//             res.clear();
//         }
//         return ans;
        
        
        
        vector<bool> ans(l.size(),false);
        for(int i=0;i<l.size();i++)
        {
            //if the sub array size is equal to 2
            if(r[i]-l[i]+1==2)
                ans[i]=true;
            else if(isArthemetic(nums,l[i],r[i]))
                ans[i]=true;
        }
        return ans;
    }
    
    bool isArthemetic(vector<int>& nums,int start,int end)
    {
      
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=start;i<=end;i++)
        {
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        
        if(mini==maxi)
            return true; 
        
       
        if((maxi-mini)%(end-start)!=0)
            return false;
        
       
        int diff=(maxi-mini)/(end-start);
        
        
        vector<bool> present(end-start+1,false);
        for(int i=start;i<=end;i++)
        {
            
            
            if((nums[i]-mini)%diff!=0)
                return false;
            
            int ind=(nums[i]-mini)/diff;
            
           
            if(present[ind])
                return false;
           
            present[ind]=true;
            
        }
        return true;
    }
};