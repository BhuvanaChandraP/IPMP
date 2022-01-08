class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end(),greater<int>());
        // vector<int> ans;
        // int ctr=0;
        // for(int i =0;ctr<k;i++)
        // {
        //     ans.push_back(nums[i]);
        //     ctr++;
        // }
        // //reverse(ans.begin(),ans.end());
        // return ans;
        vector<int> res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,
                    greater<pair<int,int>> > pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
            if(pq.size()>k)
                pq.pop();
        }
        unordered_set<int> s;
        while(!pq.empty())
        {
            s.insert(pq.top().second);
            pq.pop();
        }
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(i) != s.end() )
            {res.push_back(nums[i]);}
        }
        return res;
    }
};