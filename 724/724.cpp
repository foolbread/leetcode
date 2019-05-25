class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int n = nums.size();
        if (n == 0)
            return -1;

        for (int i=0; i<n; i++)
        {
            leftsum = 0;
            rightsum = 0;

            for (int j=0; j<i; j++)
            {
                leftsum += nums[j];
            }

            for (int k=n-1; k>i; k--)
            {
                rightsum += nums[k];
            }

            if (leftsum == rightsum)
                return i;
        }

        return -1;
    }
};
