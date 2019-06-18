class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int t;
        for (int i=0; i<arr.size(); i++)
        {
            if (arr[i] == 0 && i+1<arr.size())
            {
                for (int j=arr.size()-1; j>i+1; j--)
                {
                   arr[j] = arr[j-1];
                }
                arr[i+1] = 0;
                ++i;
            }
        }
    }
};
