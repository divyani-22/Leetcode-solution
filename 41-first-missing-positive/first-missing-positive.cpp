class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>numset(nums.begin(),nums.end());
        int i=1;
        while(numset.count(i)){
            i++;
        }
        return i;
    }
};