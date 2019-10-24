class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0)
            return 1;

        bitset<32> bitval;
        int idx = 0;
        while (N > 0)
        {
            if (!(N & 1))
                bitval[idx] = true;
            ++idx;
            N = N >> 1;
        }

        return bitval.to_ulong();
    }
};
