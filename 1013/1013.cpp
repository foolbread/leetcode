class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum=0;
        for (int i=0; i<A.size(); i++)
        {
            sum += A[i];
        }

        if (sum%3 != 0)
        {
            return false;
        }

        int t = sum/3;
        int s = 0;
        int c = 0;

        for (int i=0; i<A.size(); i++)
        {
            s += A[i];
            if (s == t)
            {
                c++;
                s = 0;
            }
        }

        return c == 3 ? true:false;
    }
};
