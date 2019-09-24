class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ret = 0;

        map<char,int> mchars;
        for (int i=0; i<chars.size(); i++)
        {
            if (mchars.count(chars[i]) == 0)
            {
                mchars[chars[i]] = 1;
            }
            else
            {
                ++mchars[chars[i]];
            }
        }

        for (int i=0; i<words.size(); i++)
        {
            map<char,int> mtmp = mchars;
            for (int j=0; j<words[i].size(); j++)
            {
                if (mchars.count(words[i][j]) == 0)
                    break;

                if (mtmp[words[i][j]] == 0)
                    break;
                else
                    --mtmp[words[i][j]];

                if (j == words[i].size()-1)
                    ret += words[i].size();
            }
        }

        return ret;
    }
};
