class Solution {
public:
    string countAndSay(int n) {
        vector<string> initvec = {"1","11","21","1211","111221"};

        if (0<n && n<6)
            return initvec[n-1];

        string t = initvec[4];
        string ret;
        char c;
        int m;
        for (int i=5; i<n; i++)
        {
            c = t[0];
            m = 1;
            ret.clear();
            for (int j=1; j<t.size(); j++)
            {
                if (c != t[j])
                {
                    ret.push_back(char(m+0x30));
                    ret.push_back(c);
                    c = t[j];
                    m = 1;
                }
                else
                {
                    ++m;
                }
            }
            ret.push_back(char(m+0x30));
            ret.push_back(c);
            t = ret;
        }

        return ret;
    }
};
