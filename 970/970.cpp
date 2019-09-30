class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> ret;
        if (bound < 2)
            return ret;

        if (x==1 && y==1)
        {
            ret.push_back(2);
        }
        else if (x==1 && y!=1)
        {
            int i=0;
            int t=0;
            while (true)
            {
                t = pow(y,i) + 1;
                if (t <= bound)
                    ret.push_back(t);
                else
                    break;

                ++i;
            }
        }
        else if (x!=1 && y==1)
        {
            int i=0;
            int t=0;
             while (true)
            {
                t = pow(x,i) + 1;
                if (t <= bound)
                    ret.push_back(t);
                else
                    break;

                ++i;
            }
        }
        else
        {
            set<int> numset;
            int i=0;
            int j=0;
            int t=0;
            while(true)
            {
                while(true)
                {
                    t = pow(x,i) + pow(y,j);
                    if (t <= bound)
                        numset.insert(t);
                    else
                        break;
                    ++j;
                }
                if (j == 0)
                    break;
                j=0;
                ++i;
            }

            for (auto i : numset)
            {
                ret.push_back(i);
            }
        }

        return ret;
    }
};
