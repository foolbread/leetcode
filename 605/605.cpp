class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0)
            return true;

        if (flowerbed.size() == 1)
            return flowerbed[0] == n-1;

        int c = 0;
        for (int i=0; i<flowerbed.size(); i++)
        {
            if (flowerbed[i] == 1)
            {
                //head start 0
                if (c == i)
                {
                    n = n - c/2;
                }
                else
                {
                    if (c > 2)
                    {
                        if (c % 2 == 0)
                            n = n - c/2 + 1;
                        else
                            n = n - c/2;
                    }
                }

                c = 0;
            }
            else
            {
                ++c;
            }
        }

        if (c > 0)
        {
            if (c == flowerbed.size()) //ALL 0
            {

                if (c % 2 != 0)
                    n = n - c/2 - 1;
                else
                    n = n - c/2;

            }
            else //end 0
            {
                n = n - c/2;
            }

        }

        return n<=0;
    }
};
