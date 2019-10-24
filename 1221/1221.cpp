class Solution {
public:
    int balancedStringSplit(string s) {
        int ret = 0;
        vector<char> chvec;
        for (int i=0; i<s.size(); i++)
        {
            if (chvec.size() > 0)
            {
                if (chvec.back() == s[i])
                    chvec.push_back(s[i]);
                else
                    chvec.pop_back();

                if (chvec.size() == 0)
                    ++ret;
            }
            else
            {
                chvec.push_back(s[i]);
            }
        }

        return ret;
    }
};
