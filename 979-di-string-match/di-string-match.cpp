class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int inc=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='I')
            { ans.push_back(inc++);
            }
            else{
                ans.push_back(n--);
            }
        }
        ans.push_back(inc);
        return ans;
    }
};