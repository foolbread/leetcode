class Solution {
public:
    string toLowerCase(string str) {
        for (int i=0; i<str.size(); i++)
        {
            if (str[i] >= 0x41 && str[i] <= 0x5A)
            {
                str[i] = str[i] + 32;
            }
        }
        
        return str;
    }
};
