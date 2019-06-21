class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        if (logs.size() < 2)
            return logs;

        vector<string> ret;
        vector<string> numvec;
        map<string,vector<string>> tmap;
        size_t pos;

        for (int i=0; i<logs.size(); i++)
        {
            pos = logs[i].find_first_of(' ');
            if (logs[i][pos+1]>0x2f && logs[i][pos+1]<0x3a)
                numvec.push_back(logs[i]);
            else
            {
                tmap[logs[i].substr(pos+1)].push_back(logs[i]);
            }

        }

        for (auto p:tmap)
        {
            if (p.second.size() > 1)
            {
                sort(p.second.begin(),p.second.end());
            }

            for (int i=0; i<p.second.size(); i++)
            {
                ret.push_back(p.second[i]);
            }
        }

        for (int i=0; i<numvec.size(); i++)
        {
            ret.push_back(numvec[i]);
        }

        return ret;
    }
};
