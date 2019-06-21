class Solution {
public:
    int rotatedDigits(int N) {
        int c = 0;
        int n = 0;
        int t = 0;
        int j = 1;
        bool invalid = false;
        for (int i=1; i<=N; i++)
        {
            n = i;
            invalid = false;
            j = 0;
            t = 0;
            while(n > 0 && !invalid)
            {
                switch (n%10)
                {
                    case 3:
                    case 4:
                    case 7:
                        invalid = true;
                        break;
                    case 2:
                        t = t + 5*pow(10,j);
                        break;
                    case 5:
                        t = t + 2*pow(10,j);
                        break;
                    case 6:
                        t = t + 9*pow(10,j);
                        break;
                    case 9:
                        t = t + 6*pow(10,j);
                        break;
                    case 0:
                        t = t + 0*pow(10,j);
                        break;
                    case 1:
                        t = t + 1*pow(10,j);
                        break;
                    case 8:
                        t = t + 8*pow(10,j);
                        break;
                }

                ++j;
                n /= 10;
            }

            if (!invalid && t != i)
            {
                ++c;
            }
        }

        return c;
    }
};
