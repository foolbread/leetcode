class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> ret;
        map<string,int> m_str;
        size_t n= 0;
        size_t p = 0;
        do
        {
            n = A.find(" ",n+1);
            m_str[A.substr(p,n-p)]++;
            p = n;
            p++;
        }while(n != string::npos);
        
        n = 0;
        do
        {
            n = B.find(" ",n+1);
            m_str[B.substr(p,n-p)]++;
            p = n;
            p++;
        }while(n != string::npos);
        
        for (map<string,int>::iterator it=m_str.begin(); it!=m_str.end(); it++)
        {
            if (it->second == 1)
                ret.push_back(it->first);
        }
        return ret;
    }
};
