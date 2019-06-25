class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26];
        memset(a,0,26*sizeof(int));

        for (int i=0; i<magazine.size(); i++)
        {
            ++a[magazine[i]-0x61];
        }

        for (int i=0; i<ransomNote.size(); i++)
        {
            if (--a[ransomNote[i]-0x61] < 0)
                return false;
        }

        return true;
    }
};
