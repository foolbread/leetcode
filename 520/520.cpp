class Solution {
public:
    bool detectCapitalUse(string word) {
        bool contin = false;
        for (int i=0; i<word.size(); i++)
        {
            if (word[i]>0x40 && word[i]<0x5B)
            {
                if (i == 0)
                    continue;

                if (i == 1 && word[0]>0x40 && word[0]<0x5B)
                {
                    contin = true;
                    continue;
                }

                if (!contin)
                    return false;
            }
            else
            {
                if (contin)
                    return false;
            }
        }

        return true;
    }
};
