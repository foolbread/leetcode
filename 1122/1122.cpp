class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ret;
        vector<int> notexist;
        map<int,int> arr1map;
        for (int i=0; i<arr1.size(); i++)
        {
            if (arr1map.count(arr1[i]) == 0)
            {
                arr1map[arr1[i]] = 0;
            }
            ++arr1map[arr1[i]];
        }

        for (int i=0; i<arr2.size(); i++)
        {
            int s = arr1map[arr2[i]];
            for (int j=0; j<s; j++)
            {
                ret.push_back(arr2[i]);
            }
            arr1map[arr2[i]] = 0;
        }

        for (auto k:arr1map)
        {
            if (k.second != 0)
            {
                for (int i=0; i<k.second; i++)
                    notexist.push_back(k.first);
            }
        }

        sort(notexist.begin(),notexist.end());

        for (int i=0; i<notexist.size(); i++)
            ret.push_back(notexist[i]);

        return ret;
    }
};
