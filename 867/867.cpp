class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ret;
        vector<int> t;
        
        int cols = A[0].size();
        int rows = A.size();
         
        for (int i=0; i<cols; i++)
        {
            for(int j=0; j<rows; j++)
            {
                t.push_back(A[j][i]);
            
            }
            ret.push_back(t);
            t.clear();
        }

        return ret;
    }
};
