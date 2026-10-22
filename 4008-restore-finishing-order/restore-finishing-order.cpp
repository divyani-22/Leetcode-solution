class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        for(int i=0;i<order.size();i++){
            auto it = find(friends.begin(),friends.end(),order[i]);
            
            if(friends.end()!=it){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};