class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int len = A.size();
        int t;
        for (int i=0; i<len; i++)
        {
            //even
            if (i%2 == 0 && A[i]%2 != 0)
            {
                for (int j=i+1; j<len; j+=2)
                {
                    if (A[j]%2 == 0)
                    {
                        t = A[j];
                        A[j] = A[i];
                        A[i] = t;
                    }
                }
            }
            
            //odd
            if (i%2 == 1 && A[i]%2 != 1)
            {
                for (int j=i+1; j<len; j+=2)
                {
                    if (A[j]%2 == 1)
                    {
                        t = A[j];
                        A[j] = A[i];
                        A[i] = t;
                    }
                }
            }
        }
        
        return A;
    }
};
