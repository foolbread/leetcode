class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;

        if (needle.size() > haystack.size())
            return -1;

        if (needle.size() == haystack.size())
        {
            if (haystack.compare(needle) == 0)
                return 0;
            else
                return -1;
        }

        int n = haystack.size() - needle.size();
        int j = 0;
        int ni = 0;
        for (int i=0; i<=n; i++)
        {
            if (haystack[i] == needle[0])
            {
                ni = i;
                j = 0;
                while (ni < haystack.size() && j < needle.size() && haystack[ni] == needle[j])
                {
                    ++j;
                    ++ni;
                }

                if (ni - i == needle.size())
                    return i;
            }
        }

        return -1;
    }
};
