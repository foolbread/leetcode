class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ret;
        vector<int> odd;
        for (vector<int>::iterator it=A.begin(); it!=A.end(); it++)
        {
            if (*it % 2 != 1)
                ret.push_back(*it);
            else
                odd.push_back(*it);
        }
        
        ret.insert(ret.end(),odd.begin(),odd.end());
        
        return ret;
    }
};
