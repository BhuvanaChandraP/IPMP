class Solution {
public:
    string sortSentence(string s) {
        string res;
        vector<string> str(10);
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >= 48 && s[i]<=57)
            {
                if(s[i]-48 == 1)
                    str[s[i]-48] = res;
                else 
                    str[s[i]-48] = " " +res;
                res = "";
                i++;
            }
            else 
            {
                res += s[i];
            }
        }
        string answer;
        for(string x : str)
        {
            answer += x;
        }
        return answer;
//         vector<string> res;
//         string temp;
//         string answer;
//         for(int i=0;i<s.size();i++)
//         {
//             while(s[i] != ' ')
//             {
//                 temp += s[i];
//             }
//             res.push_back(temp);
//             temp.clear();
//         }
//         vector<string> ans(res.size());
//         for(int i = 0;i<res.size();i++)
//         {
//             temp = res[i];
//             int num = temp[temp.size()-1]-'0';
//             ans[num] = temp;
            
//         }
//         for(int i=0;i<ans.size();i++)
//         {
//             answer += ans[i];
//         }
//         return answer;
        
   }
};