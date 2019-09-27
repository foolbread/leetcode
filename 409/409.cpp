class Solution {
public:
    int longestPalindrome(string s) {
        int lowchs[26];
        int uppchs[26];
        memset(lowchs,0,sizeof(int)*26);
        memset(uppchs,0,sizeof(int)*26);

        for (int i=0; i<s.size(); i++)
        {
            if (s[i]>='a' && s[i]<='z')
                ++lowchs[s[i]-'a'];

            if (s[i]>='A' && s[i]<='Z')
                ++uppchs[s[i]-'A'];
        }

        int ret = 0;
        bool exist = false;
        for (int i=0; i<26; i++)
        {
            if (lowchs[i]%2 == 0)
                ret += lowchs[i];

            if (uppchs[i]%2 == 0)
                ret += uppchs[i];

            if (lowchs[i]%2 != 0)
            {
                exist = true;
                ret = ret + lowchs[i] - 1;
            }

            if (uppchs[i]%2 != 0)
            {
                exist = true;
                ret = ret + uppchs[i] - 1;
            }
        }


        return exist?ret+1:ret;
    }
};
