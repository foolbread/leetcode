class Solution {
public:
    int heightChecker(vector<int>& heights) {
        if (heights.size() == 1)
            return 0;
        int ret = 0;
        vector<int> cmp(heights);
        sort(heights.begin(),heights.end());

        for (int i=0; i<heights.size(); i++)
        {
            if (heights[i] != cmp[i])
                ++ret;
        }

        return ret;
    }
};
