class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int ret = 0;
        int d = 0;
        map<int,int> mdist;
        for (int i=0; i<points.size(); i++)
        {
            for (int j=0; j<points.size(); j++)
            {
                if (i == j)
                    continue;

                d = dist(points[i],points[j]);
                if (mdist.count(d) == 0)
                {
                    mdist[d] = 0;
                }
                else
                {
                    ret = ret + mdist[d]*2;
                }
                ++mdist[d];
            }

            mdist.clear();
        }

        return ret;
    }

    int dist(vector<int> p1, vector<int> p2){
        return pow(double(p1[0]-p2[0]),2)+pow(double(p1[1]-p2[1]),2);
    }
};
