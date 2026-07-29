class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i:nums){
            if(i==0 && digit==0){
                count++;
            }
            while(i>0){
                if(i%10==digit){
                    count++;
                }
                i/=10;
            }
        }
        return count;
        
    }
};