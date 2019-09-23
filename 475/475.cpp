class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int ret = 0;
        int c = 0;

        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());

        for (int i=0; i<houses.size(); i++)
        {
            int t = INT_MAX;
            for (int j=0; j<heaters.size(); j++)
            {
                if (heaters[j] == houses[i])
                {
                    t = 0;
                    break;
                }
                else if (heaters[j] > houses[i])
                {
                    if (j == 0)
                        t = heaters[j]-houses[i];
                    else
                        t = heaters[j]-houses[i] > houses[i]-heaters[j-1] ? houses[i]-heaters[j-1] : heaters[j]-houses[i];
                    break;
                }
                else if (j==heaters.size()-1 && heaters[j]<houses[i])
                {
                    t = houses[i]-heaters[j];
                }
            }

            ret = ret < t ? t : ret;
        }

        return ret;
    }
};
