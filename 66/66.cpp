class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ret(digits.size());
        if (digits.size() == 0)
        {
            ret.push_back(1);
            return ret;
        }

        int n = digits.size();
        ++digits[n-1];
        for (int i=n-1; i>=0; i--)
        {
            if (digits[i] > 9)
            {
                if (i==0)
                {
                    ret[i] = 0;
                    ret.insert(ret.begin(),1);
                }
                else
                {
                    ret[i] = 0;
                    ++digits[i-1];
                }
            }
            else
            {
                ret[i] = digits[i];
            }
        }

        return ret;
    }
};
