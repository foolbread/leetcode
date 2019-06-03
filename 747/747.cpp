class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;

        int max = -1;
        int secmax = -1;
        int idx = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] > secmax)
            {
                secmax = nums[i];
                if (nums[i] > max)
                {
                    secmax = max;
                    max = nums[i];
                    idx = i;
                }
            }
        }

        return max >= 2*secmax ? idx : -1;
    }
};
