class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.size() == 1 && nums[0] != 0)
            return 1;
        
        int c = 0;
        int max = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] != 0)
                c++;
            else
            {
                if (c > max)
                    max = c;
                c = 0;
            }
            
            if (i == nums.size()-1)
                max = (c>max) ? c:max;
        }
        
        return max;
    }
};
