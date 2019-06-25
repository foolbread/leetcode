class Solution {
public:
    int firstUniqChar(string s) {
        int a[26];
        memset(a,0,26*sizeof(int));

        for (int i=0; i<s.size(); i++)
        {
            ++a[s[i]-0x61];
        }

        for (int i=0; i<s.size(); i++)
        {
            if (a[s[i]-0x61] == 1)
                return i;
        }

        return -1;
    }
};
