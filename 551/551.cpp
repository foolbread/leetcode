class Solution {
public:
    bool checkRecord(string s) {
        int c = 0;
        int b = 0;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i] == 'A')
            {
                b = 0;
                ++c;
                if (c > 1)
                    return false;
            }
            else if (s[i] == 'L')
            {
                ++b;
                if (b > 2)
                    return false;
            }
            else
            {
                b = 0;
            }
        }

        return true;
    }
};
