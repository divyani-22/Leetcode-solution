class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>freq;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (freq.count(c)) {
                return c;
            }
            freq.insert(c);
        }
        return ' ';
    }
};