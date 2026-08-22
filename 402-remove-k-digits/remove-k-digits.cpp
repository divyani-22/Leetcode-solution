class Solution {
public:
    string func(string s, int k)
    {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            while(!st.empty() && k>0 && 
                  (st.top()-'0') > (s[i]-'0')){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        if(st.empty())
            return "0";
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        int i=0;
        while(i<res.size() && res[i]=='0'){
            i++;
        }
        res=res.substr(i);
        if(res.empty())
            return "0";
        return res;
    }
    string removeKdigits(string num, int k) {
        return func(num, k);
    }
};