class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        for (int n=left; n<=right; n++)
        {
            int t = n;
            bool b = true;
            do{
                int s = t%10;
                if (s == 0 || n%s != 0)
                    b = false;
            }while(t=t/10);
                
            if (b)
            {
                ret.push_back(n);
            }
        }
        
        return ret;
    }
};
