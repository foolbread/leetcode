class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if (A.size() == 1)
            return true;
        
        int inc = 0;
        int dec = 0;
        
        for(int i=0; i<A.size()-1; i++)
        {
            if (inc + dec == 2)
                return false;
            
            if (A[i] < A[i+1])
                dec = 1;
            else if (A[i] > A[i+1])
                inc = 1;
        }
        
        
        
        return (inc + dec == 2) ? false:true;
    }
};
