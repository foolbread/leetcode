class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> ret;
        vector<int> vec;
        vec.resize(2);
        char c = S[0];
        vec[0] = 0;
        int cnt = 1;

        for (int i=1; i<S.size(); i++)
        {
            if (c == S[i])
            {
                ++cnt;
            }
            else
            {
                if (cnt >= 3)
                {
                    vec[1] = i-1;
                    ret.push_back(vec);
                }

                c = S[i];
                cnt = 1;
                vec[0] = i;
            }
        }

        if (cnt >= 3)
        {
            vec[1] = S.size()-1;
            ret.push_back(vec);
        }

        return ret;
    }
};
