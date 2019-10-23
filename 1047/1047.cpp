class Solution {
public:
    string removeDuplicates(string S) {
        string ret;
        for (int i=0; i<S.size(); i++)
        {
            if (ret.back() == S[i])
            {
                ret.pop_back();
            }
            else
            {
                ret.push_back(S[i]);
            }
        }

        return ret;
    }
};
