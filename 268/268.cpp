class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int t = ((n+1)*(0+n))/2;

        for (int i=0;i<n;i++)
            t -= nums[i];

        return t;
    }
};
