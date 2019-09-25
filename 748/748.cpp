class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int chs[26];
        memset(chs,0,sizeof(int)*26);
        int sumcnt = 0;
        for (int i=0; i<licensePlate.size(); i++)
        {
            if (licensePlate[i] >= 'a' && licensePlate[i] <= 'z')
            {
                ++chs[licensePlate[i]-'a'];
                ++sumcnt;
                continue;
            }

            if (licensePlate[i] >= 'A' && licensePlate[i] <= 'Z')
            {
                ++chs[licensePlate[i]-'A'];
                ++sumcnt;
            }
        }

        int t;
        int minlen = 1000;
        int idx;
        for (int i=0; i<words.size(); i++)
        {
            int tmpchs[26];
            t = 0;
            memcpy(tmpchs,chs,sizeof(int)*26);
            for (int j=0; j<words[i].size(); j++)
            {
                if (tmpchs[words[i][j]-'a'] > 0)
                {
                    --tmpchs[words[i][j]-'a'];
                    ++t;
                }
            }

            if (t == sumcnt)
            {
                if (words[i].size() < minlen)
                {
                    minlen = words[i].size();
                    idx = i;
                }
            }
        }

        return words[idx];
    }
};
