class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ret;
        for (vector<int>::iterator it=A.begin(); it!=A.end(); it++)
        {
            ret.push_back(*it**it);
        }

        sort(ret.begin(),ret.end());

        return ret;
    }
};
