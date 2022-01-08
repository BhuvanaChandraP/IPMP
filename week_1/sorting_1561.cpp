class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ctr =0,ans=0;
        for(int i = piles.size()-2;ctr< piles.size()/3;i = i-2)
        {
            ans += piles[i];
            ctr++;
            
        }
        return ans;
    }
};
