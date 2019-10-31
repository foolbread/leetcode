class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int sum = 0;
        for (int i=0; i<grid.size(); i++)
        {
            for (int j=0; j<grid[i].size(); j++)
            {

                if (i==0)
                {
                    sum += grid[i][j];
                }
                if (i==grid.size()-1)
                {
                    sum += grid[i][j];
                }
                if (j==0)
                {
                    sum += grid[i][j];
                }
                if (j==grid[i].size()-1)
                {
                    sum += grid[i][j];
                }

                if (j != 0 && grid[i][j] > grid[i][j-1]) //left
                {
                    sum = sum + (grid[i][j] - grid[i][j-1]);
                }

                if (j != grid[i].size()-1 && grid[i][j] > grid[i][j+1]) //right
                {
                    sum = sum + (grid[i][j] - grid[i][j+1]);
                }

                if (i != 0 && grid[i][j] > grid[i-1][j]) // up
                {
                    sum = sum + (grid[i][j] - grid[i-1][j]);
                }

                if (i != grid.size()-1 && grid[i][j] > grid[i+1][j]) // down
                {
                    sum = sum + (grid[i][j] - grid[i+1][j]);
                }

                if (grid[i][j] != 0)
                {
                    sum += 2;
                }
            }
        }

        return sum;
    }
};
