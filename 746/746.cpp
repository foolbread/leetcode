class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int step[1024];
        step[0] = cost[0];
        step[1] = cost[1];

        for (int i=2; i<cost.size(); i++)
        {
            step[i] = cost[i] + min(step[i-1],step[i-2]);
        }

        return min(step[cost.size()-1],step[cost.size()-2]);
    }
};
