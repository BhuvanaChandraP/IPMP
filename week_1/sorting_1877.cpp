class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
         sort(nums.begin(), nums.end());
        int res = 0, n = nums.size();
        for(int i=0; i<n/2; i++) {
            res = max(res, (nums[i]+nums[n-1-i]));
        }
        return res;
        
        
        
//         sort(nums.begin(),nums.end());
//         vector<pair<int,int>> res;
//         for(int i=0,j=nums.size()-1;i<nums.size()/2;i++)
//         {
//             res.push_back(make_pair(nums[i],nums[j]));
//             j--;
            
//         }
//         vector<int> ans;
//         int answer=INT_MIN;
//         for(int i=0;i<res.size();i++)
//         {
//             answer = max((res[i].first + res[i].second),answer);
//             //ans.push_back(res[i].first + res[i].second);
//         }
//         return answer;
        //sort(ans.begin(),ans.end());
        // int maxi = ans[0];
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(maxi < ans[i])
        //         maxi = ans[i];
        // }
        // return maxi;
        //return ans[ans.size()-1];
        
        
        
        //whole array into 2 parts
//         sort(nums.begin(),nums.end());
//         vector<int> res1;
//         vector<int> res2;
//         int count1=0,count2=0;
//         int flg =0,ctr=0;
        
//         for(int i=0;i<nums.size() && i+2 <nums.size();i = i+2)
//         {
//             if(flg == 0)
//             {
//                 res1.push_back(nums[i]);
//                 res2.push_back(nums[i+1]);
//                 res2.push_back(nums[i+2]);
//                 flg =1;
                
//             }
//             else{
//                 res1.push_back(nums[i]);
//                 res1.push_back(nums[i+1]);
//                 res2.push_back(nums[i+2]);
//                 flg =0;
//             }
//             ctr = ctr+3;
//             // res1.push_back(nums[i]);
//             // res2.push_back(nums[i+1]);
//             // ress.push_back(nums[i+2]);
            
            
//         }
//         while(ctr < nums.size() )
//         {
//             if(res1.size() <= res2.size())
//             {
//                 res1.push_back(nums[ctr]);
//             }
//             else{
//                 res2.push_back(nums[ctr]);
//             }
//             ctr++;
//         }
//         for(int i=0;i<res1.size();i++)
//         {
//             count1 += res1[i];
//         }
//         for(int i=0;i<res2.size();i++)
//         {
//             count2 += res2[i];
//         }
//         int mini = max(count1,count2);
//         return mini;
        
    }
};