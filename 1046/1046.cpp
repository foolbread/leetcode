class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() >= 2)
        {
            sort(stones.begin(),stones.end());
            int s = stones.size();
            if (stones[s-1] != stones[s-2])
            {
                s = stones[s-1] - stones[s-2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(s);
            }
            else
            {
                stones.pop_back();
                stones.pop_back();
            }
        }

        return stones.size() == 0 ? 0 : stones[0];
    }
};
