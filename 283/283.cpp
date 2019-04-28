class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        vector<int>::iterator it = nums.begin();
        
        for (; it != nums.end();)
        {
            if (*it == 0)
            {
                it = nums.erase(it);
                ++cnt;
            }
            else
            {
                ++it;
            }
        }
        
        for (int i = 0; i < cnt; ++i)
            nums.push_back(0);
    }
};
