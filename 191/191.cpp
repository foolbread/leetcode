#define FLAGS_NUM 8
#define BIT_MAP   16
int bitmap[BIT_MAP] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int r = 0;
        for (int i = 0; i < FLAGS_NUM; ++i)
            r += bitmap[(n >> (i*4)) & 0x0000000F];
        
        return r;
    }
};
