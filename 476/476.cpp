#include <cmath>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int c = 0;
        int ret = 0;
        while (num > 0)
        {
            if ((num & 1) != 1){
                ret += pow(2,c);
            }
            c++;
            num = num >> 1;
        }
        
        return ret;
    }
};
