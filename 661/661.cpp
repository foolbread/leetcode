class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> ret;
        vector<int> vec;
        vec.resize(M[0].size());
        int c = 1;
        int sum = 0;
        for (int i=0; i<M.size(); i++)
        {
            for (int j=0; j<M[i].size(); j++)
            {
                c = 1;
                sum = M[i][j];
                if (i-1 >= 0)
                {
                    if (j-1 >= 0)
                    {
                        sum += M[i-1][j-1];
                        c++;
                    }

                    if (j+1 < M[i].size())
                    {
                        sum += M[i-1][j+1];
                        c++;
                    }

                    sum += M[i-1][j];
                    c++;
                }

                if (i+1 < M.size())
                {
                    if (j-1 >= 0)
                    {
                        sum += M[i+1][j-1];
                        c++;
                    }

                    if (j+1 < M[i].size())
                    {
                        sum += M[i+1][j+1];
                        c++;
                    }

                    sum += M[i+1][j];
                    c++;
                }

                if (j-1 >= 0)
                {
                    sum += M[i][j-1];
                    c++;
                }

                if (j+1 < M[i].size())
                {
                    sum += M[i][j+1];
                    c++;
                }

                vec[j] = sum/c;
            }

            ret.push_back(vec);
        }

        return ret;
    }
};
