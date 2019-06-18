class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        int ret;

        for (int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }

        if (s.size() < 3)
        {
            ret = *s.rbegin();
            return ret;
        }

        int i = 0;
        for (auto it=s.rbegin(); it!=s.rend(); ++it)
        {
            i++;
            if (i == 3)
            {
                ret = *it;
                break;
            }
        }

        return ret;
    }
};
