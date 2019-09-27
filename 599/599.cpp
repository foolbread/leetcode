class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> mlist;
        for (int i=0; i<list1.size(); i++)
        {
            mlist[list1[i]] = i;
        }

        int minsum = INT_MAX;
        vector<string> ret;

        for (int i=0; i<list2.size(); i++)
        {
            if (mlist.count(list2[i]) > 0)
            {
                if (i+mlist[list2[i]] == minsum)
                {
                    ret.push_back(list2[i]);
                }
                else if (i+mlist[list2[i]] < minsum)
                {
                    ret.clear();
                    minsum = i+mlist[list2[i]];
                    ret.push_back(list2[i]);
                }


            }
        }
        return ret;
    }
};
