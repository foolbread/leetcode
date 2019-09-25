class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int chs[26];
        for (int i=0; i<order.size(); i++)
            chs[order[i]-'a'] = i;

        for(int i=0; i<words.size(); i++)
            for (int j=i+1; j<words.size(); j++)
            {
                int n=0;
                int minlen = words[i].size() > words[j].size() ? words[j].size() : words[i].size();

                while (true)
                {
                    if (n == minlen)
                    {
                        if (words[i].size() > words[j].size())
                            return false;
                        break;
                    }

                    if (chs[words[i][n]-'a'] < chs[words[j][n]-'a'])
                    {
                        break;
                    }

                    if (chs[words[i][n]-'a'] > chs[words[j][n]-'a'])
                        return false;

                    ++n;
                }
            }

        return true;
    }

};
