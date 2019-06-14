class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> t(nums);
        sort(t.begin(),t.end());
        int min = -1;
        int max = -1;
        for (int i=0; i<nums.size(); i++)
        {
            if (t[i] != nums[i])
            {
                min = i;
                break;
            }
        }

        for (int i=nums.size()-1; i>=0; i--)
        {
            if (t[i] != nums[i])
            {
                max = i;
                break;
            }
        }

        if (min < 0 && max <0)
            return 0;

        return max-min+1;
    }
};
