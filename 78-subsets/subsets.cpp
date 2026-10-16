class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        int total_subset = 1 << n;
        v.reserve(total_subset);
        for(int i = 0 ; i < total_subset ; i++)
        {
            vector<int> v1;
            for(int j = 0 ; j < n ; j++)
            {
                if((i & (1 << j)) != 0)
                {
                    v1.push_back(nums[j]);
                }
            }
            v.push_back(v1);
        }
        return v;   
    }
};