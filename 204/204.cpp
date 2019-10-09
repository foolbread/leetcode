class Solution {
public:
    int countPrimes(int n) {
       vector<bool> bvec;
       bvec.resize(n,true);
       int e = sqrt(n);
       int ret = 0;
       for (int i=2; i<=e; i++)
       {
           if (bvec[i])
           {
               for (int j=2*i; j<n; j+=i)
                   bvec[j] = false;
           }
       }

       for (int i=2; i<n; i++)
       {
           if (bvec[i])
               ++ret;
       }

       return ret;
    }
};
