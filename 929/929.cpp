class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int len = emails.size();
        int idx = 0;
        string prestr;
        set<string> s;
        for (int i=0; i<len; i++)
        {
            idx = emails[i].find('@',0);
            prestr = emails[i].substr(0,idx);
            for (string::iterator it=prestr.begin(); it!=prestr.end(); it++)
            {
                if (*it == '.')
                {
                    prestr.erase(it);
                }
                
                if (*it == '+')
                {
                    prestr.erase(it,prestr.end());
                    break;
                }
            }
            
            prestr.append(emails[i].substr(idx));
            s.insert(prestr);
        }
        
        return s.size();
    }
};
