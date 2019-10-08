class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> firstmap;
        map<char,char> secondmap;
        for (int i=0; i<s.size(); i++)
        {
            if (firstmap.count(s[i]) == 0)
            {
                if (secondmap.count(t[i]) == 0)
                {
                    firstmap[s[i]] = t[i];
                    secondmap[t[i]] = s[i];
                }
                else
                    return false;
            }
            else
            {
                if (firstmap[s[i]] != t[i])
                    return false;
            }
        }

        return true;
    }
};
