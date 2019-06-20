class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int asc = 0;
        int des = 0;
        int m = 0;
        int n = nums.size()-1;

        for (int i=0; i<nums.size(); i++)
        {
            if (nums[m] <= nums[i])
                m = i;
            else
                ++asc;

            if (nums[n] >= nums[nums.size()-1-i])
                n = nums.size()-1-i;
            else
                ++des;

            if (asc > 1 && des > 1)
                return false;
        }

        return true;
    }
};
