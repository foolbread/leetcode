class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int mchars[5];
        memset(mchars,0,5*sizeof(int));

        for (int i=0; i<text.size(); i++)
        {
            switch (text[i])
            {
                case 'a':
                    ++mchars[0];
                    break;
                case 'b':
                    ++mchars[1];
                    break;
                case 'o':
                    ++mchars[2];
                    break;
                case 'l':
                    ++mchars[3];
                    break;
                case 'n':
                    ++mchars[4];
                    break;
            }
        }

        int c = 0;
        c = mchars[0];
        c = c > mchars[1] ? mchars[1] : c;
        c = c > mchars[2]/2 ? mchars[2]/2 : c;
        c = c > mchars[3]/2 ? mchars[3]/2 : c;
        c = c > mchars[4] ? mchars[4] : c;

        return c;
    }
};
