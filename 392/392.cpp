class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0)
            return true;

        int idx = -1;
        bool ret = false;

        for (int i=0; i<s.size(); i++)
        {
            ret = false;
            for (int j=idx+1; j<t.size(); j++)
            {
                if (t[j] == s[i])
                {
                    idx = j;
                    ret = true;
                    break;
                }
            }

            if (!ret)
                return ret;
        }

        return ret;
    }
};
