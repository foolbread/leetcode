class Solution {
public:
    string removeOuterParentheses(string S) {
        string ret;
        int left = -1;
        int right = -1;
        int lc =0;
        int rc =0;
        for (int i=0; i<S.size(); i++)
        {
            if (S[i] == '(')
            {
                if (left < 0)
                    left = i;
                ++lc;
            }

            if (S[i] == ')')
            {
                ++rc;
                if (lc == rc)
                {
                    right = i;
                    if (right-left != 1)
                    {
                        ret.append(S.substr(left+1,right-left-1));
                    }

                    left = -1;
                    right = -1;
                    lc = 0;
                    rc = 0;
                }
            }
        }

        return ret;
    }
};
