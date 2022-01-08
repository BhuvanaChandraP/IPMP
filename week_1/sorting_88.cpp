class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n-1;
        int end1 = m -1;
        int end2 = n -1;

        while(end2 >= 0){
            if(end1 >=0){
                nums1[end--] = nums1[end1] > nums2[end2] ? nums1[end1--] : nums2[end2--];
            }else{
                nums1[end--] = nums2[end2--];
            }
        }

//         int i=0,j=0;
//         vector<int>nums11 = nums1;
//         nums1.clear();
//         while(i<m || j<n)
//         {
//             if(nums11[i]<nums2[j])
//             {
//                 nums1.push_back(nums11[i]);
//                 //cout<<nums1[i]<<" ";
//                 i++;
//             }
//             if(nums11[i]>nums2[j])
//             {
//                 nums1.push_back(nums2[j]);
//                 //cout<<nums2[j]<<" ";
//                 j++;
//             }
//             else
//             {
//                 nums1.push_back(nums11[i]);
//                 //cout<<nums1[i]<<" ";
//                 i++;
//                 j++;
//             }
            
            
//         }
//         while(j<n)
//         {
//             nums1.push_back(nums2[j]);
//             j++;
//         }
        
    }
};