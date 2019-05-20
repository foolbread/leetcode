class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        if (numRows == 0)
            return ret;

        vector<int> item;
        item.push_back(1);
        ret.push_back(item);
        int n = 0;

        for (int i=1; i<numRows; i++)
        {
            n = i+1;
            item.resize(n);
            for (int j=0; j<n; j++)
            {
                if (j ==0 || j == n-1)
                {
                    item[j] = 1;
                    continue;
                }

                item[j] = ret[i-1][j-1] + ret[i-1][j];
            }

            ret.push_back(item);
        }

        return ret;
    }
};
