class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int c = 0;
        int max = 0;

        for (int i=0; i<seats.size(); i++)
        {
            if (seats[i] == 0)
            {
                ++c;
                continue;
            }

            if (seats[i] == 1)
            {
                if (c > 0)
                {
                    if (i-c-1 >= 0)
                    {
                        if (c%2 == 0)
                          max = max > c/2 ? max : c/2;
                        else
                          max = max > (c/2+1) ? max : (c/2+1);
                    }
                    else
                    {
                        max = max > c ? max : c;
                    }

                    c = 0;
                }
            }
        }

        if (c > 0)
        {
            max = max > c ? max : c;
        }


        return max;
    }
};
