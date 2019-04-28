class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        size_t pos = 0;
        map<string,int> visitMap;
        string domain;
        vector<string> ret;
        int cnt = 0;
        for (int i=0; i<cpdomains.size(); i++)
        {
            pos = cpdomains[i].find(" ");
            cnt = atoi(cpdomains[i].substr(0,pos).c_str());
            domain = cpdomains[i];
            while (pos != string::npos)
            {
                domain = domain.substr(pos+1);
                visitMap[domain] += cnt;
                pos = domain.find(".");
            }
        }
        
        string str;
        for (map<string,int>::iterator it = visitMap.begin(); it != visitMap.end(); it++)
        {
            str = to_string(it->second);
            str.push_back(' ');
            str.append(it->first);
            
            ret.push_back(str);
        }
        
        return ret;
    }
};
