class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int row = grid.size();
        int cols = grid[0].size();

        int xy = 0;
        int xz = 0;
        int yz = 0;
        int rowmax = 0;
        int colsmax = 0;
        for (int i=0; i<row; i++)
        {
           rowmax = 0;
           for (int j=0; j<cols; j++)
           {
                if (grid[i][j] > 0)
                    ++xy;

                 rowmax = rowmax < grid[i][j] ? grid[i][j] : rowmax;
           }
           xz += rowmax;
        }

        for (int i=0; i<cols; i++)
        {
            colsmax = 0;
            for(int j=0; j<row; j++)
            {
                colsmax = colsmax < grid[j][i] ? grid[j][i] : colsmax;
            }
            yz += colsmax;
        }

        return xy+xz+yz;
    }
};
