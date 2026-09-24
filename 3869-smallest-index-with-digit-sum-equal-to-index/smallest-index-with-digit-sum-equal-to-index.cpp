class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            int sum=0;
            int temp=nums[i];
            while(temp){
                int digit=temp%10;//last digit
                sum+=digit;//add it in summ
                temp/=10;//remove last digit
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
        
    }
};