class Solution {
    void flip(vector<int>& A, int idx){
        for(int i = 0; i <= idx/2; ++i){
            int tmp = A[i];
            A[i] = A[idx-i];
            A[idx-i] = tmp;
        }
    }
public:
    
    
    
    vector<int> pancakeSort(vector<int>& A) {
        
        
        vector<int> result;
        for(int i = 0;i < A.size();i++){
           auto maxPosition = max_element(A.begin(), A.end() - i);
           result.push_back(maxPosition  - A.begin() + 1);  
           result.push_back(A.size() - i);
           reverse(A.begin(),maxPosition+1);
           reverse(A.begin(),A.end() - i);
        }
        return result;
    //     vector<int> result;
    //     for(int i = A.size()-1; i > 0; --i){
    //         for(int j = 1; j <= i; ++j){
    //             if(A[j] == i+1){
    //                 flip(A, j);
    //                 result.push_back(j+1);
    //                 break;
    //             }
    //         }
    //         flip(A, i);
    //         result.push_back(i+1);
    //     }
    //     return result;
    }
};