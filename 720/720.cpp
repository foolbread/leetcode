class Solution {
public:
    int maxlen = 0;
    string ret;
    map<int,vector<string>> mwords;
    string longestWord(vector<string>& words) {
        for (int i=0; i<words.size(); i++)
        {
            if (mwords.count(words[i].size()) == 0)
                mwords[words[i].size()] = vector<string>();

            mwords[words[i].size()].push_back(words[i]);

            maxlen = maxlen > words[i].size() ? maxlen : words[i].size();
        }

        vector<string> first = mwords[1];
        for (int i=0; i<first.size(); i++)
        {
            if (ret.size() == 1)
            {
                if (first[i][0] < ret[0])
                    ret = first[i];
            }

            if (ret.size() == 0)
                ret = first[i];

            levelMatch(first[i],2);
        }

        return ret;
    }

    void levelMatch(string str, int level){
        if (level > maxlen)
            return;

        vector<string> vecstr = mwords[level];
        if (vecstr.size() == 0)
            return;

        for (int i=0; i<vecstr.size(); i++)
        {
            if (vecstr[i].find(str) == 0)
            {
                if (vecstr[i].size() == ret.size())
                {
                    for (int j=0; j<ret.size(); j++)
                    {
                        if (vecstr[i][j] > ret[j])
                            break;

                        if (vecstr[i][j] < ret[j])
                        {
                            ret = vecstr[i];
                            break;
                        }
                    }
                }

                if (vecstr[i].size() > ret.size())
                {
                    ret = vecstr[i];
                }

                levelMatch(vecstr[i],level+1);
            }
        }
    }
};
