class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // vector<int>ans;
        // unordered_map<int,int>freq;
        // for(int i=0;i<nums.size();i++){
        //     nums[i]
        //     freq[i]++;
        //     if(freq[i]>=2) ans.push_back(nums[i]);
        // }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]==nums[j]) ans.push_back(nums[i]);
            }
        }
        set<int>unique_ans(ans.begin(), ans.end());
        ans.assign(unique_ans.begin(), unique_ans.end());
        return ans;
        
    }
};