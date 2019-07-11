class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = 0;
        int c = 0;
        bool start = false;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i] != ' ')
            {
                ++c;
            }
            else
            {
                ret = c > 0 ? c : ret;
                c = 0;
            }
        }

        ret = c > 0 ? c : ret;
        return ret;
    }
};
