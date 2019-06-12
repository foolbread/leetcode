class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 0)
            return;

        k = k % nums.size();
        vector<int> t;
        t.reserve(nums.size());

        for (int i=nums.size()-k; i<nums.size(); i++)
        {
            t.push_back(nums[i]);
        }

        for (int i=0; i<nums.size()-k; i++)
        {
            t.push_back(nums[i]);
        }

        nums.swap(t);
    }
};
