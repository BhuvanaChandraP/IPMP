class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//         int m = mat[0].size();
//         int n = mat.size();
//         //int mini = min(n,m);
//         vector<int> res;
//         int i=0;
//         for(int k=0;k<m;k++)
//         {
//             i=0;
//             while(i+k <= n-1 && i<m)
//             {
//                 res.push_back(mat[i+k][i]);
//                 i++;
//             }

//             sort(res.begin(),res.end());
//             i=0;
//             while(i+k <= n-1 && i<m)
//             {
//                 mat[i+k][i] = res[i];
//                  i++;
//                     //res.push_back(mat[i+k][i]);
//             }
//             res.clear();

//         }
        
//         for(int k=0;k<n;k++)
//         {
//             i=0;
//             while(i+k <= m-1 && i<n)
//             {
//                     res.push_back(mat[i][i+k]);
//                  i++;
//             }

//             sort(res.begin(),res.end());
//             i=0;
//             while(i+k <= m-1 && i<n)
//             {
//                     //res.push_back(mat[i+k][i]);
//                     mat[i][i+k] = res[i];
//                  i++;
//             }
//             res.clear();

            
//         }
//         return mat;
        
        int y = mat.size(), x = mat[0].size() - 1;
        vector<int> diag(y);
        for (int i = 2 - y; i < x; i++) {
            int k = 0;
            for (int j = 0; j < y; j++)
                if (i+j >= 0 && i+j <= x) {
                    diag[k] = mat[j][i+j];
                    k++;
                }
            sort(diag.begin(), diag.begin() + k);
            k = 0;
            for (int j = 0; j < y; j++)
                if (i+j >= 0 && i+j <= x) {
                    mat[j][i+j] = diag[k];
                    k++;
                }
        }
        return mat;

    }
};