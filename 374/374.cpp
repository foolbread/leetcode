// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        int middle;
        int rst;
        while (left <= right)
        {
            middle = (right-left)/2 + left;
            rst = guess(middle);
            if (rst > 0)
            {
                left = middle + 1;
            }
            else if (rst < 0)
            {
                right = middle - 1;
            }
            else
            {
                return middle;
            }
        }

        return middle;
    }
};
