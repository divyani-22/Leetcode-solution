class Solution {
public:
    int rob(vector<int>& nums) {
      int house1=0;
      int house2=0;
      for(int num:nums){
        int current=max(house1,house2+num);
        house2=house1;
        house1=current;
      } 
      return house1; 
    }
};