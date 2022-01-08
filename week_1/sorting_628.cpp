class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int num1,num2;
        // num1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        // num2 = nums[0]*nums[1]*nums[nums.size()-1];
        // return max(num1,num2);
         int mini = (int)1e9;
          int smin = (int)1e9;

          int maxi = -(int)1e9;
          int smax = maxi;
          int tmax = maxi;

          for(int i = 0; i < nums.size(); i++) {
              if(nums[i] > maxi) {
                  tmax = smax;
                  smax = maxi;
                  maxi = nums[i];
              } else if(nums[i] > smax) {
                  tmax = smax;
                  smax = nums[i];
              } else if(nums[i] > tmax) {
                  tmax = nums[i];
              }


              if(nums[i] < mini) {
                  smin = mini;
                  mini = nums[i];
              } else if(nums[i] < smin) {
                  smin = nums[i];
              }
          }

          return max(maxi * smax * tmax, maxi * mini * smin);
        
    }
};