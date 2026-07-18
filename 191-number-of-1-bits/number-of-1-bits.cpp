class Solution {
public:
    int hammingWeight(int n) {
         return __builtin_popcount(n);//directly 1 bits count kar deta hai
        
    }
};