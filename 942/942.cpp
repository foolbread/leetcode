class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ret;
        ret.reserve(S.size());
        int l = 0;
        int h = S.size();
        for (int i=0; i<S.size(); i++)
        {
            if (S[i] == 'I')
            {
                ret.push_back(l);
                ++l;
            }

            if (S[i] == 'D')
            {
                ret.push_back(h);
                --h;
            }
        }

        ret.push_back(l);

        return ret;
    }
};
