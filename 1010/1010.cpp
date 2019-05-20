class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ret = 0;
        int num[60] = {0};

        for (int i=0; i<time.size(); i++)
        {
            ret += num[(60 - time[i]%60)%60];
            ++num[time[i]%60];
        }

        return ret;
    }
};
