class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        vector<int> brr(arr.size());
        std::vector<int>::iterator it;
        for(int i=0;i<arr.size();i++)
        {
            brr[i] = 2*arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            it = find (brr.begin(), brr.end(), arr[i]);
            if(it != brr.end() )
                if(arr[i] == 0)
                {
                    it = find (arr.begin()+i+1, arr.end(), 0);
                    if(it != arr.end() )
                        return true;
                    
                }
            else{
                return true;
            }
            
        }
        return false;
    }
};
