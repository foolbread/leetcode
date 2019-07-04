class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int idx = 0;
        int half = s.size()/2;
        int l = 0;
        int n = 0;
        for (int i=1; i<=half; i++)
        {
            if (s[i] == s[idx] && s.size()%(i-idx) == 0)
            {
                l = i-idx;
                n = i;
                string str = s.substr(idx,i-idx);
                while (true)
                {
                    if (s.find(str,n) != n)
                        break;

                    if (n + l == s.size())
                        return true;

                    n = n + l;
                }
            }
        }

        return false;
    }
};
