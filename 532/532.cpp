class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<int> s;
        int t = 0;

        for (int i=0; i<nums.size(); i++)
        {
            t = nums[i]-k;
            for (int j=i-1; j>=0; j--)
            {
                if (nums[j] < t)
                    break;

                if (nums[j] == t)
                {
                    if (s.find(nums[i]+nums[j]) == s.end())
                    {
                        s.insert(nums[i]+nums[j]);
                    }
                }
            }

            t = nums[i]+k;
            for (int j=i+1; j<nums.size(); j++)
            {
                if (nums[j] > t)
                    break;

                if (nums[j] == t)
                {
                    if (s.find(nums[i]+nums[j]) == s.end())
                    {
                        s.insert(nums[i]+nums[j]);
                    }
                }
            }
        }

        return s.size();
    }
};
