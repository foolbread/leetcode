class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int c = 0;
        int n = 0;
        int t = 0;
        for (int i=L;i<=R;i++)
        {
            n = 0;
            t = i;
            while (t != 0)
            {
                t = t & (t-1);
                n++;
            }
            
            if (isPrimeNumber(n) && n != 1)
            {
                c++;
            }
        }
        
        return c;
    }
    
    bool isPrimeNumber(int n){
        for (int i=2; i<n; i++)
        {
            if (n%i == 0)
                return false;
        }
        
        return true;
    }
};
