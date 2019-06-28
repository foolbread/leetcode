class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int idx = 0;
        int pre = 0;
        string t;
        bool b = true;
        set<string> s;
        map<string,int> km;
        string ret;
        int max = 0;
        int c;
        //init
        for (int i=0; i<banned.size(); i++)
            s.insert(banned[i]);

        while (b)
        {
            //spilt spaces
            idx = paragraph.find(' ',idx+1);
            if (idx == string::npos)
                b = false;

            t = idx==string::npos ? paragraph.substr(pre) : paragraph.substr(pre,idx-pre);
            pre = idx+1;
            // tolower
            transform(t.begin(),t.end(),t.begin(),::tolower);

            //del symbols
            for (int i=0; i<t.size(); i++)
            {
                if (t[i] < 0x61 || t[i] >0x7a)
                {
                    t=t.substr(0,i);
                    break;
                }
            }

            //filter banned word
            if (s.count(t) > 0)
                continue;

            //statistics
            if (++km[t] > max)
            {
                max = km[t];
                ret = t;
            }
        }

        return ret;
    }
};
