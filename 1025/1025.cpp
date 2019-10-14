class Solution {
public:
    bool divisorGame(int N) {
        int c = 0;
        int n = N;
        bool ok = false;
        while(true)
        {
            ok = false;
            for(int i=1; i<n; i++)
            {
                if (n%i == 0)
                {
                    ++c;
                    n -= i;
                    ok = true;
                    break;
                }
            }
            if (!ok)
                break;
        }

        return c%2!=0;
    }
};
