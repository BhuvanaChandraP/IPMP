class Solution {
      // bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
      //   {
      //       return (a.second < b.second);
      //   }
public:
    int getpower(int n)
    {
        int ctr =0;
        while(n != 1)
        {
            if(n%2 == 0)
            {
                n = n/2;
            }
            else{
                n = (n*3)+1;
            }
            ctr++;
        }
        return ctr;
    }
    
    // bool sortbysec(const pair<int,int> &a,
    //               const pair<int,int> &b)
    // {
    //     return (a.second < b.second);
    // }
    int getKth(int lo, int hi, int k) {
        vector<int> nums;
        vector<pair<int,int>> res;
        for(int i=lo;i<= hi;i++)
        {
            //nums.push_back(i);
            res.push_back({getpower(i),i});
            
        }
        sort(res.begin(),res.end());
        // sort(res.begin(), res.end(), [](const pair<int,int> &a, const pair<int,int> &b){
        //      return (a.second < b.second);
        // });
        // for(int i=0;i<res.size();i++)
        // {
        //     nums.push_back(res.first);
        // }
        // return nums[k-1];
        return res[k-1].second;
        
        
    }
};