class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ret;

        int idx = 0;
        int pos = 0;
        bool bok = false;
        string str;
        string pre;
        while (pos != string::npos)
        {
            pos = text.find_first_of(' ',idx);
            if (pos == string::npos)
            {
                str = text.substr(idx);
            }
            else
            {
                str = text.substr(idx,pos-idx);
                idx = pos+1;
            }

            if (bok)
            {
                ret.push_back(str);
                bok = false;
            }

            if (pre == first && str == second)
            {
                bok = true;
            }

            pre = str;
        }

        return ret;
    }
};
