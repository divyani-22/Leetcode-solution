class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        //unordered set for no.of distinct elemnts
        
        for(int i=0;i<n;i++){
            unordered_set<int>distinct_el;
            for(int j=i;j<n;j++){
                distinct_el.insert(nums[j]);
                int distinct_count=distinct_el.size();
                total+=distinct_count*distinct_count;
            }
        }
        return total;
    }
};