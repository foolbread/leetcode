class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if (grid.size() < 3 || grid[0].size() < 3)
            return 0;

        int row = grid.size();
        int col = grid[0].size();
        int cnt = 0;
        int t = 0;
        bitset<9> numbit;

        for (int i=0; i<=row-3; i++)
            for (int j=0; j<=col-3; j++)
            {
                numbit.reset();
                if (grid[i][j]>0 && grid[i][j]<10)
                    numbit.set(grid[i][j]-1);
                else
                    continue;

                if (grid[i][j+1]>0 && grid[i][j+1]<10)
                    numbit.set(grid[i][j+1]-1);
                else
                    continue;

                if (grid[i][j+2]>0 && grid[i][j+2]<10)
                    numbit.set(grid[i][j+2]-1);
                else
                    continue;

                if (grid[i+1][j]>0 && grid[i+1][j]<10)
                    numbit.set(grid[i+1][j]-1);
                else
                    continue;

                if (grid[i+1][j+1]>0 && grid[i+1][j+1]<10)
                    numbit.set(grid[i+1][j+1]-1);
                else
                    continue;

                if (grid[i+1][j+2]>0 && grid[i+1][j+2]<10)
                    numbit.set(grid[i+1][j+2]-1);
                else
                    continue;

                if (grid[i+2][j]>0 && grid[i+2][j]<10)
                    numbit.set(grid[i+2][j]-1);
                else
                    continue;

                if (grid[i+2][j+1]>0 && grid[i+2][j+1]<10)
                    numbit.set(grid[i+2][j+1]-1);
                else
                    continue;

                if (grid[i+2][j+2]>0 && grid[i+2][j+2]<10)
                    numbit.set(grid[i+2][j+2]-1);
                else
                    continue;

                if (!numbit.all())
                    continue;

                t = grid[i][j]+grid[i][j+1]+grid[i][j+2];

                if (t != (grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2]))
                    continue;


                if (t != (grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]))
                    continue;


                if (t != (grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]))
                    continue;


                if (t != (grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]))
                    continue;


                if (t != (grid[i][j]+grid[i+1][j]+grid[i+2][j]))
                    continue;


                if (t != (grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1]))
                    continue;


                if (t != (grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2]))
                    continue;

                ++cnt;
            }

        return cnt;
    }
};
