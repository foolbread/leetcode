class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt = 0;
        int onecnt = 0;
        int zerocnt = 0;
        bool zerocon = false;
        bool onecon = false;

        for (int i=0; i<s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (zerocon)
                {
                    ++zerocnt;
                    if (zerocnt <= onecnt)
                        ++cnt;
                }
                else
                {
                    zerocnt = 1;
                    if (onecnt > 0)
                        ++cnt;
                    zerocon = true;
                    onecon = false;
                }
            }
            else
            {
                if (onecon)
                {
                    ++onecnt;
                    if (onecnt <= zerocnt)
                        ++cnt;
                }
                else
                {
                    onecnt = 1;
                    if (zerocnt > 0)
                        ++cnt;
                    onecon = true;
                    zerocon = false;
                }
            }
        }

        return cnt;
    }
};
