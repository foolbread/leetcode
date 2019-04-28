class Solution {
public:
    int numJewelsInStones(string J, string S) {
        if (J.empty()){
            return 0;
        }
        
        int sum = 0;
        for (string::iterator it = J.begin(); it != J.end(); it++)
        {
            for (string::iterator itt = S.begin(); itt != S.end(); itt++)
            {
                if (*it == *itt)
                    sum++;
            }
        }
        
        return sum;
    }
};
