class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixGcd(nums.size());
        int mx = 0;
        long long sum = 0;

        for(int i = 0 ; i< nums.size(); i++){
            mx = max(mx, nums[i]); 
            prefixGcd[i] = gcd(nums[i], mx);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        if(nums.size()%2 != 0){
            prefixGcd.erase(prefixGcd.begin() + (prefixGcd.size() / 2));
        }
        
        int newSize = prefixGcd.size();

        for(int i =0; i<newSize/2; i++){
            sum+=gcd(prefixGcd[i], prefixGcd[newSize - 1 - i]); //ig
        }


        return sum;
        
    }
};