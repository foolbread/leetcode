class Solution {
public:
    string reverseVowels(string s) {
        //a,e,i,o,u,A,E,I,O,U
        string t = "aeiouAEIOU";
        int i = 0;
        int j = s.size()-1;
        bool bfirst = false;
        bool blast = false;

        while (i != j && i<j)
        {
            for (int n=i; n<s.size(); n++)
            {
                i = n;
                if (t.find(s[n]) != string::npos)
                {
                    bfirst = true;
                    break;
                }
            }

            for (int n=j; n>=0; n--)
            {
                j = n;
                if (t.find(s[n]) != string::npos)
                {
                    blast = true;
                    break;
                }
             }

            if (i < j && bfirst && blast)
            {
                bfirst = false;
                blast = false;
                swap(s[i++],s[j--]);
            }

        }

        return s;
    }
};
