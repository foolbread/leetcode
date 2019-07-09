class Solution {
public:
    int countSegments(string s) {
        int ret = 0;
        bool seg = false;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (seg)
                {
                     ++ret;
                    seg = false;
                }
            }
            else
                seg = true;
        }

        if(seg)
            ++ret;

        return ret;
    }
};
