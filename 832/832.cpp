class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> ret;
        vector<int> t;
        
        for (vector<vector<int>>::iterator it = A.begin(); it != A.end(); it++)
        {
            //filp
            for (vector<int>::reverse_iterator itt = it->rbegin(); itt != it->rend(); itt++)
            {
                t.push_back(*itt);
            }
            
            //invert
            for (vector<int>::iterator itt = t.begin(); itt != t.end(); itt++)
            {
                if(*itt == 0)
                {
                    *itt = 1;
                }
                else
                {
                    *itt = 0; 
                }
            }
            
            ret.push_back(t);
            t.clear();
        }
        
        return ret;
    }
};
