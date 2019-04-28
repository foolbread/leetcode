class Solution {
public:
    bool judgeCircle(string moves) {
        int pos[2] = {0,0};
        
        for (int i=0; i< moves.size(); i++)
        {
            switch (moves[i])
            {
                case 'U':
                    pos[0]++;
                    break;
                case 'D':
                    pos[0]--;
                    break;
                case 'L':
                    pos[1]++;
                    break;
                case 'R':
                    pos[1]--;
                    break;
            }
        }
        
        if (pos[0] == 0 && pos[1] == 0)
        {
            return true;
        }
     
        return false;
    }
};
