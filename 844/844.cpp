class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string sret;
        string tret;
        for (int i=0; i<S.size(); i++)
        {
            if (S[i] == '#')
            {
                if (sret.size() != 0)
                    sret.pop_back();
            }
            else
                sret.push_back(S[i]);
        }

        for (int i=0; i<T.size(); i++)
        {
            if (T[i] == '#')
            {
                if (tret.size() != 0)
                    tret.pop_back();
            }
            else
                tret.push_back(T[i]);
        }

        return sret.compare(tret) == 0;
    }
};
