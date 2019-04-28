class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rows = nums.size();
        int cols = nums[0].size();
        if (rows*cols != r*c)
            return nums;
        
        vector<vector<int>> ret;
        vector<int> item;
        int n = 0;
        for (int i=0; i<rows; i++)
            for (int j=0; j<cols; j++)
            {
                if (n < c)
                {
                   item.push_back(nums[i][j]);
                   n++;
                }
                
                
                if (n == c)
                {
                   n = 0;
                   ret.push_back(item);
                   item.clear();  
                }
            }
        
        if (item.size() > 0)
            ret.push_back(item);
        
        return ret;
    }
};
