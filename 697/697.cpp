class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, pair<int,pair<int,int>>> statis;
        map<int, pair<int,pair<int,int>>>::iterator itt;
        int len = 1;
        int n = 0;

        for (int i=0; i<nums.size(); i++)
        {
            itt = statis.find(nums[i]);
            if (itt != statis.end())
            {
                itt->second.first++;
                itt->second.second.second = i-itt->second.second.first+1;
            }
            else
            {
                statis[nums[i]] = pair<int,pair<int,int>>(1,make_pair(i,1));
            }
        }

        for (map<int, pair<int,pair<int,int>>>::iterator it=statis.begin(); it!=statis.end(); it++)
        {
            if (it->second.first > n)
            {
                len = it->second.second.second;
                n = it->second.first;
            }
            else if (it->second.first == n)
            {
                if (it->second.second.second < len)
                    len = it->second.second.second;
            }
        }


        return len;
    }
};
