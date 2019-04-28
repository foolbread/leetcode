class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        if (A.size() == 1)
            return 0;
        
        int len = A.size();
        int sum = 0;
        int max = A[0];
        int min = A[0];
        
        for (int i=0; i<A.size(); i++)
        {
            if (A[i] > max)
                max = A[i];
            
            if (A[i] < min)
                min = A[i];
        }
        
        return max-K > min+K ? max-2*K-min : 0; 
       }
};
