class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> ans(n);
        sort(deck.begin(),deck.end());
        int flg =0,chance=0;
        deque<int> dp;
        for(int i=0;i<n;i++)
            dp.push_back(i);
        while(dp.size() > 0)
        {
            if(flg == 0)
            {
                ans[dp.front()] = deck[chance++];
                dp.pop_front();
            }
            else{
                dp.push_back(dp.front());
                dp.pop_front();
            }
            flg ^= 1;
        }
        return ans;
    }
};