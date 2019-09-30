class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> marr;
        for (int i=0; i<arr.size(); i++)
        {
            if (marr.count(arr[i]) == 0)
                marr[arr[i]] = 0;
            ++marr[arr[i]];
        }

        set<int> setarr;
        for (auto i : marr)
        {
            if (setarr.count(i.second) > 0 )
                return false;

            setarr.insert(i.second);
        }

        return true;
    }
};
