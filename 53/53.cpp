class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int max = nums[0];
        int sum = 0;
        for (int i=0; i<nums.size(); i++)
        {
            sum = nums[i];
            max = sum > max ? sum : max;
            for (int j=i+1; j<nums.size(); j++)
            {
                sum += nums[j];
                max = sum > max ? sum : max;
            }
        }

        return max;
    }
};
