class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pos=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int neg=nums[0]*nums[1]*nums[nums.size()-1];
        return max(pos,neg);
        
    }
};