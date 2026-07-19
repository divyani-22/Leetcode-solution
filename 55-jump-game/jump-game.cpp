class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long reach=0;
        for(int i=0;i,nums.size();i++){
            if(i>reach){
                return false;
            }
            reach=max(reach,(long long)i+nums[i]);
            if(reach>=nums.size()-1){
                return true;
            }
        }
        return true;
    }
};