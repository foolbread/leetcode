class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums = 0;
        int sumt = 0;
        for (int i=0; i<s.size(); i++)
        {
            sums = sums + (s[i]-'a');
        }

        for (int i=0; i<t.size(); i++)
        {
            sumt = sumt + (t[i]-'a');
        }


        return 'a'+(sumt-sums);
    }
};
