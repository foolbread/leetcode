class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mnums;
        for (int i=0; i<nums.size(); i++)
        {
            if (mnums.count(nums[i]) == 0)
            {
                mnums[nums[i]] = 0;
            }

            ++mnums[nums[i]];
        }

        int ret = 0;
        for (auto i : mnums)
        {
            if (mnums.count(i.first-1) > 0)
            {
               ret =  ret < mnums[i.first] + mnums[i.first-1] ? mnums[i.first] + mnums[i.first-1] : ret;
            }
        }

        return ret;
    }
};
