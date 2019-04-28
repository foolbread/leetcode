class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cols = grid[0].size();
        int rows = grid.size();
        int sum = 0;
        for (int i=0; i<rows; i++)
            for (int j=0; j<cols; j++)
            {
                if (grid[i][j] == 1)
                {
                    sum += 4;
                    //left
                    if (j-1 >=0 && grid[i][j-1] == 1)
                    {
                        sum--;
                    }
                    
                    //right
                    if (j+1 < cols && grid[i][j+1] == 1)
                    {
                        sum--;
                    }
                    
                    //up
                    if (i-1 >=0 && grid[i-1][j] == 1)
                    {
                        sum--;
                    }
                    
                    //down
                    if (i+1 < rows && grid[i+1][j] == 1)
                    {
                        sum--;
                    }
                }
            }
        
        return sum;
    }
};
