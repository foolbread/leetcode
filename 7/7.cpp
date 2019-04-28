class Solution {
public:
    //-2147483648  and  2147483647
    int reverse(int x) {
        long long ret = 0;
        while(x){
            ret = ret*10 + x%10;
            x /= 10;
        }
        
        if (ret > INT_MAX || ret < INT_MIN){
            return 0;
        }
        
        return ret;
    }
};
