class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int ctr=0;
        // int n = nums.size();
        // for(int i=n-1;i>0;i--)
        // {
        //     if(nums[i] != nums[i-1] )
        //     {
        //         ctr++;
        //     }
        //     if(ctr == 2)
        //         return nums[i-1];
        // }
        // return nums[n-1];
        
        int ctr=0,ctr1=0,ctr2=0;
        int n = nums.size();
        long fmax = LONG_MIN;
        long smax = fmax;
        long tmax = fmax;
        for(int i =0;i<n;i++)
        {
            // if(fmax == nums[i] ||smax == nums[i] ||tmax == nums[i] )
            // {
            //     continue;
            // }
            if(fmax < nums[i])
            {
                tmax = smax;
                smax = fmax;
                fmax = nums[i];
                //ctr++;
            }
            else if(smax < nums[i] && fmax > nums[i])
            {
                tmax = smax;
                smax = nums[i];
                ctr1++;
                //ctr++;
            }
            else if(nums[i] < smax && nums[i] > tmax){
                tmax = nums[i];
                ctr2++;
                //ctr++;
            }
        }
// if(n == 2 || ctr == n || (smax == INT_MIN && ctr1 != 0) || (tmax == INT_MIN && ctr2 != 0))
//         {
//             return fmax;
//         }
//         return tmax;
        if(n == 2 || (tmax == LONG_MIN))
        {
            return (int)fmax;
        }
        return (int)tmax;
        
    }
};