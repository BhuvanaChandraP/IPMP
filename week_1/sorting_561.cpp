class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i = n-2;i>=0;i= i-2)
        {
            //cout<<nums[i]<<" ";
            ans += nums[i];
        }
        return ans;
        
    }
};