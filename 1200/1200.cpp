class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ret;
        sort(arr.begin(),arr.end());
        int min = INT_MAX;
        int t = 0;
        for (int i=0; i<arr.size()-1; i++)
        {
            t = abs(arr[i]-arr[i+1]);
            min = min > t ? t : min;
        }

        for (int i=0; i<arr.size()-1; i++)
        {
            if (min == abs(arr[i]-arr[i+1]))
            {
                vector<int> vect{arr[i],arr[i+1]};
                ret.push_back(vect);
            }
        }
        return ret;
    }
};
