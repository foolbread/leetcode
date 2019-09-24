class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n = A.size()/2;
        sort(A.begin(),A.end());

        int t = A[0];
        int c = 1;

        for (int i=1; i<A.size(); i++)
        {
            if (t != A[i])
            {
                c = 1;
                t = A[i];
            }
            else
            {
                ++c;
                if (c == n)
                    break;
            }
        }

        return t;
    }
};
