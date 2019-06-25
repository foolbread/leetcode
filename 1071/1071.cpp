class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1.find_first_of(str2)!= 0)
            return "";

        int g = gcd(str1.size(),str2.size());
        string ret = str2.substr(0,g);

        for (int i=0; i<str1.size(); i+=g)
        {
            if (ret.compare(0,g,str1,i,g) != 0)
                return "";
        }

        for (int i=0; i<str2.size(); i+=g)
        {
            if (ret.compare(0,g,str2,i,g) != 0)
                return "";
        }

        return ret;
    }
};
