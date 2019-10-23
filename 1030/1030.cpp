class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> ret;
        vector<int> t{r0,c0};
        ret.push_back(t);
        t.clear();

        map<int,vector<int>> distancemap;
        int d;

        for (int i=0; i<R; i++)
            for (int j=0; j<C; j++)
            {
                if (i==r0 && j==c0)
                    continue;

                d = abs(i-r0)+abs(j-c0);
                if (distancemap.count(d) == 0)
                    distancemap[d] = vector<int>();

                distancemap[d].push_back(i);
                distancemap[d].push_back(j);
            }

        for (auto k:distancemap)
        {
            for (int i=0; i<k.second.size(); i+=2)
            {
                t.push_back(k.second[i]);
                t.push_back(k.second[i+1]);
                ret.push_back(t);
                t.clear();
            }
        }
        return ret;
    }
};
