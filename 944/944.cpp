class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int c = 0;
        int row = A.size();
        int cols = A[0].size();

        for (int i=0; i<cols; i++)
            for (int j=0; j<row-1; j++)
            {
                if (A[j][i] > A[j+1][i])
                {
                    ++c;
                    break;
                }
            }

        return c;
    }
};
