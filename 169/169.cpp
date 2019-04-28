class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int data = 0;
        int count = 0;
        int len = nums.size();
        
        for (int i = 0; i < len; ++i)
        {
            if (count == 0)
            {
                data = nums[i];
                ++count;
            }
            else if (data == nums[i])
            {
                ++count;
            }
            else
            {
                --count;
            }
        }
        
        return data;
    }
};
