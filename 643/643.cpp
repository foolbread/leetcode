class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max = 0;
        int t = 0;

        for (int i=0; i<k; i++)
            t += nums[i];

        max = t;
        for (int j=k; j<nums.size(); j++)
        {
            t = t-nums[j-k]+nums[j];
            max = max > t ? max : t;
        }

        return double(max)/double(k);
    }
};
