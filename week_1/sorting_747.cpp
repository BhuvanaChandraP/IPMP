class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index =-1;
        int max_num = 0;
        int s_max =0;
        int i =0 ;
        int n = nums.size();
        while(i<n){
           if(nums[i] > max_num){
               s_max = max_num;
               index = i;
               max_num = nums[i];
           }else if(nums[i] > s_max){
               s_max = nums[i];
           }
            ++i;
        }
        
        if(max_num >= 2*s_max){
            return index;
        }else{
            return -1;
        }
//         int max = nums[0],ind=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(max < nums[i])
//             {
//                 max = nums[i];
//                 ind = i;
//             }
            
//         }
//         sort(nums.begin(),nums.end());
//         if(nums.size()==1)
//         {
//             return 0;
//         }
//         else if(nums[nums.size()-2]*2 <= nums[nums.size()-1])
//         {
//             return ind;
//         }
//         else
//             return -1;
        
    }
};