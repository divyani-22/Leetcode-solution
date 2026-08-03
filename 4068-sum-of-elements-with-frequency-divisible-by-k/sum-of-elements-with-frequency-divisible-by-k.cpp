class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>freq(maxi+1,0);
        int sum=0;
        for(int num:nums){
            freq[num]++;

        }
        for(int i=0;i<=maxi;i++){
            if(freq[i]!=0 && freq[i]%k==0){
                sum+=i*freq[i];
            }
        }
        return sum;
    }
};