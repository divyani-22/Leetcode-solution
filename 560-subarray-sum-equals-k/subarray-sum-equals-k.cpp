class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;
        int total = 0, count = 0;
        for (int i=0;i<nums.size();i++) {
            total += nums[i];
            if (freq.find(total - k) != freq.end()) {
                count += freq[total - k];
            }
            freq[total]++;
        }
        return count;        
    }
};