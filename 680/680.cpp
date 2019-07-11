class Solution {
public:
    bool validPalindrome(string s) {
        int ni,nj;
        for (int i=0,j=s.size()-1; i<j; i++,j--)
        {
            if (s[i] != s[j])
            {
                ni = i+1;
                nj = j;
                while (ni < nj && s[ni] == s[nj])
                {
                    ++ni;
                    --nj;
                }

                if (ni >= nj)
                    return true;

                ni = i;
                nj = j-1;
                while (ni < nj && s[ni] == s[nj])
                {
                    ++ni;
                    --nj;
                }

                if (ni >= nj)
                    return true;

                return false;
            }
        }

        return true;
    }
};
