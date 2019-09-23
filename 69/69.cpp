class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return x;

        int sum = 0;
        int n = 0;
        while (sum < x)
        {
            ++n;
            if (n < 46341)
            {
                sum = n*n;
                if (sum == x)
                    return n;
            }
            else
            {
                if(x/n < n)
                    return n-1;

            }
        }

        return n-1;
    }
};
