class Solution {
public:
    int titleToNumber(string s) {
        size_t len = s.size();
        int ret = 0;
        
        for (int i = len-1; i >= 0; --i )
        {
            ret += (s[i] - 'A' + 1) * pow(26, len-i-1);
        }
        
        return ret;
    }
};
