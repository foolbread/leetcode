class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        
        if (x == 0){
            return true;
        }
        
        int tx = x;
        long long t =  0 ;
        while (tx){
            t = t*10 + tx%10;
            tx /= 10;
        }
        
        return t == x ? true:false;
    }
};
