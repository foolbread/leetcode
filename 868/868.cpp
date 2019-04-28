class Solution {
public:
    int binaryGap(int N) {
        bitset<32> bitN(N);
        if (bitN.count() == 1)
            return 0;
        
        string str = bitN.to_string();
        int offset = 0;
        for (int i=0; i<str.size(); i++)
        {
            if (str[i] == '1')
            {
                for (int j=i+1; j<str.size(); j++)
                {
                    if (str[j] == '1')
                    {
                        if (j-i > offset)
                            offset = j-i;
                        break;
                    }
                }
            }
        }
        
        return offset;
    }
};
