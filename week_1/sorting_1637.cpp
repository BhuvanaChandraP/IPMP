class Solution {
public:
    bool cmp(const vector<int> &a,
                  const vector<int> &b)
    {
        return (a[0] < b[0]);
    }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        map<int,bool> m;
        for(int i = 0 ; i< points.size();i++){
            m[points[i][0]] = true;
        }
        int maxi = 0;

        auto it1 = m.begin();
        it1++;
        for(auto it = m.begin();it1 != m.end(); it++){
             maxi = max(it1 -> first - it->first,maxi);
            it1++;
        }
        return maxi;
        
        
        //  sort(points.begin(), points.end());
        // int ans = 0;
        // for (int i = 1; i < points.size(); ++i) {
        //     ans = max(points[i][0]-points[i-1][0], ans);
        // }
        // return ans;
        
        
        // sort(points.begin(),points.end(),cmp);
        // max =0;
        // for(int i=0;i<points.size()-1;i++)
        // {
        //     if(max < points[i+1][0]-points[i][0])
        //         max = points[i+1][0]-points[i][0];
        // }
        // return max;
    }
};