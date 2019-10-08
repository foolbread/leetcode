class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string> chmap;
        map<string,char> strmap;
        vector<string> splitvec;
        int idx = 0;
        int pre = 0;
        while (true)
        {
            idx = str.find(' ',pre);
            if (idx == string::npos)
            {
                splitvec.push_back(str.substr(pre));
                break;
            }
            splitvec.push_back(str.substr(pre,idx-pre));
            pre = idx + 1;
        }

        if (pattern.size() != splitvec.size())
            return false;

        for (int i=0; i<pattern.size(); i++)
        {
            if (chmap.count(pattern[i]) == 0)
            {
                if (strmap.count(splitvec[i]) == 0)
                {
                    chmap[pattern[i]] = splitvec[i];
                    strmap[splitvec[i]] = pattern[i];
                }
                else
                    return false;
            }
            else
            {
                if (chmap[pattern[i]] != splitvec[i])
                    return false;
            }
        }
        return true;
    }
};
