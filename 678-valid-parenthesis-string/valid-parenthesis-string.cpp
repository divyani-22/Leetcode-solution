class Solution {
public:
    bool checkValidString(string s) {
        int l = 0;
        int h = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(') l++;
            else l--;
            if (c == ')') h--;
            else h++;
            if (h < 0) return false;
            l = max(l, 0);
        }
        return l == 0;
    }
};