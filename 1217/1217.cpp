class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        map<int,int> costmap;
        int v = 0;
        int t;
        for (int i=0;i<chips.size(); i++)
        {
            if (costmap.count(chips[i]) == 0)
            {
                v = 0;
                for(int j=0; j<chips.size(); j++)
                {
                     t = abs(chips[j]-chips[i]);
                     if (t%2==1)
                         ++v;
                }
                costmap[chips[i]] = v;
            }
        }

        int ret = 0;
        for (auto k:costmap)
        {
            if (ret == 0)
                ret = k.second;
            ret = ret > k.second ?  k.second : ret;
        }

        return ret;
    }
};
