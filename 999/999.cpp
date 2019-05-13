class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ret = 0;
        //find rook
        for (int i=0; i<board.size(); i++)
            for (int j=0; j<board[i].size(); j++)
            {
                if (board[i][j] == 'R')
                {
                    //west find
                    for (int n=j; n>=0; n--)
                    {
                        if (board[i][n] == 'p')
                        {
                            ret++;
                            break;
                        }

                        if (board[i][n] == 'B')
                            break;
                    }

                    //east find
                    for (int n=j; n<board[i].size(); n++)
                    {
                        if (board[i][n] == 'p')
                        {
                            ret++;
                            break;
                        }

                        if (board[i][n] == 'B')
                            break;
                    }

                    //north find
                    for (int n=i; n>=0; n--)
                    {
                        if (board[n][j] == 'p')
                        {
                            ret++;
                            break;
                        }

                        if (board[n][j] == 'B')
                            break;
                    }

                    //south find
                    for (int n=i; n<board.size(); n++)
                    {
                        if (board[n][j] == 'p')
                        {
                            ret++;
                            break;
                        }

                        if (board[n][j] == 'B')
                            break;
                    }

                    return ret;
                }
            }

        return ret;
    }
};
