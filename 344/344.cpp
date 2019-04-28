class Solution {
public:
    string reverseString(string s) {
        string ret;
        ret.reserve(s.size());
            
        for (string::reverse_iterator rit = s.rbegin(); rit != s.rend(); rit++)
        {
            ret.push_back(*rit);
        }
        
        return ret;
    }
};
