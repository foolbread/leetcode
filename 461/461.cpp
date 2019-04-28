class Solution {
public:
    int hammingDistance(int x, int y) {
        if (x == y)
        {
            return 0;
        }
        
        
        int n = x ^ y;
        int c = 0;
        
        for (int i=0; i<32; i++)
        {
            if (n & 1 == 1)
            {
                c++;
            }
            
            n = n >> 1;
        }
        
        return c;
    }
};
