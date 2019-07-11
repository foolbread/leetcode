class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        char ch1,ch2;
        while (i<j)
        {
            while (!((s[i]>0x40&&s[i]<0x5b) || (s[i]>0x60&&s[i]<0x7b) || (s[i]>0x2f&&s[i]<0x3a)) && i<s.size())
                ++i;

            while (!((s[j]>0x40&&s[j]<0x5b) || (s[j]>0x60&&s[j]<0x7b) || (s[j]>0x2f&&s[j]<0x3a)) && j>0)
                --j;

            if (i >= j)
                break;

            if (s[i]>0x60&&s[j]<0x7b)
                ch1 = s[i]-0x20;
            else
                ch1 = s[i];

            if (s[j]>0x60&&s[j]<0x7b)
                ch2 = s[j]-0x20;
            else
                ch2 = s[j];

            if (ch1 == ch2)
            {
                ++i;
                --j;
            }
            else
                return false;
        }

        return true;
    }
};
