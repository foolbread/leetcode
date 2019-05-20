class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> ret;
        int n = A.size()-1;
        int t = 0;

        while (K)
        {
            if (n >=0)
            {
              t = A[n] + K%10;
            }
            else
            {
              t = K%10;
            }

            --n;
            K /= 10;
            if (t > 9)
            {
                ++K;
                ret.push_back(t-10);
            }
            else
            {
                ret.push_back(t);
            }
        }

        for (int i=n; i>=0; i--)
        {
            ret.push_back(A[i]);
        }

        reverse(ret.begin(),ret.end());
        return ret;
    }
};
