class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> ret;
        int suma = 0;
        int sumb = 0;
        for (int i=0; i<A.size(); i++)
            suma += A[i];

        for (int i=0; i<B.size(); i++)
            sumb += B[i];

        int t = (suma+sumb)/2;

        for (int i=0; i<A.size(); i++)
        {
            for (int j=0; j<B.size(); j++)
            {
                if (suma-A[i]+B[j] == t)
                {
                    ret.push_back(A[i]);
                    ret.push_back(B[j]);
                    return ret;
                }
            }
        }

        return ret;
    }
};
