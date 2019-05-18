class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> ret;
        ret.reserve(A.size());
        int num = 0;
        for (int i=0; i<A.size(); i++)
        {
            num = (num*2+A[i])%5;
            if (num == 0)
                ret.push_back(true);
            else
                ret.push_back(false);
        }

        return ret;
    }
};
