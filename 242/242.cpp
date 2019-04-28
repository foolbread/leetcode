int chMap[26];
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        memset(chMap, 0, 26*sizeof(int));
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            ++chMap[s[i] - 'a'];
            --chMap[t[i] - 'a'];
        }
        
        for (int j = 0; j < 26; ++j)
        {
            if (chMap[j] != 0)
                return false;
        }
        
        return true;
    }
};
