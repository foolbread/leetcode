class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret;
        ret.resize(rowIndex+1);

        ret[0] = 1;
        ret[rowIndex] = 1;

        for (int i=1; i<=rowIndex; i++)
        {
            ret[0] = 1;
            ret[i] = 1;
            for (int j=i-1; j>0; j--)
            {
                ret[j] = ret[j] + ret[j-1];
            }
        }

        return ret;
    }
};
