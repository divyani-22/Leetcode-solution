class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
    vector<int>answer(cost.size());
    int run = cost[0];
    for (int i = 0; i < cost.size(); i++) {
        run = min(run, cost[i]);
        answer[i] = run;
    }
    return answer;

    }
};