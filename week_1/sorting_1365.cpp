class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //TC O(n logn)
//         vector<int> sorted(nums);
//         vector<int> ans(nums.size());

//         sort(sorted.begin(), sorted.end());

//         for (int i = 0; i < nums.size(); i++) 
//             ans[i] = lower_bound(sorted.begin(), sorted.end(), nums[i]) - sorted.begin();

//         return ans;
        
         unordered_map<int, int> m;
          vector<int> new_nums(nums);
          int n = nums.size();

          sort(new_nums.begin(), new_nums.end());

          for (int i = n - 1; i >= 0; --i) {
            m[new_nums[i]] = i;
          }

          for (int i = 0; i < n; ++i) {
            nums[i] = m[nums[i]];
          }
          return nums;
        
    }
};