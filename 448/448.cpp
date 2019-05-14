class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ret;
        int max = nums.size();
        int idx = 0;

        for (int i=0; i<max; i++)
        {
            idx = abs(nums[i]) - 1;
            nums[idx] = nums[idx] > 0 ? -nums[idx] : nums[idx];
        }

        for (int i=0; i<max; i++)
        {
            if (nums[i] > 0)
                ret.push_back(i+1);
        }

        return ret;
    }
};
