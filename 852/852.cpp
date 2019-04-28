class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int max = A[0];
        int idx = 0;
        for (size_t i=1; i<A.size(); i++)
        {
            if (max < A[i])
            {
                max = A[i];
                idx = i;
            }
            else
            {
                break;
            }
        }
        
        return idx;
    }
};
