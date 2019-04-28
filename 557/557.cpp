class Solution {
public:
    string reverseWords(string s) {
       string ret;
        if (s.size() == 0)
        {
            return ret;
        }
        ret.reserve(s.size());
        int idx = 0;
        int pre = 0;
        string tmp;
        while (true)
        {
            pre = idx;
            idx = s.find(' ',idx+1);
            
            if (idx != string::npos){
                tmp = s.substr(pre,idx-pre);
                idx++;
            }else{
                tmp = s.substr(pre);
            }
            
            cout << "tmp:" << tmp << " size:" << tmp.size() << endl;
            
            for (string::reverse_iterator rit=tmp.rbegin(); rit!=tmp.rend(); ++rit)
            {
                ret.push_back(*rit);
            }
            
            if (idx == string::npos)
            {
                break;
            }
            
            ret.push_back(' ');
        }
        
        return ret;
    }
};
