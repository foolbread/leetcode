class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int pre = nums[0];
        int max = 1;
        int c = 1;

        for (int i=1; i<nums.size(); i++)
        {
            if (nums[i] > pre)
            {
                ++c;
            }
            else
            {
                max = max>c ? max:c;
                c = 1;

            }
            pre = nums[i];
        }

        return max>c ? max:c;
    }
};
