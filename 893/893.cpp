class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<vector<set<char>>> p;
        set<char> a;
        set<char> b;
        vector<set<char>> t;
        for (int i=0; i<A.size(); i++)
        {
            for (int j=0; j<A[i].size(); j++)
            {
                j%2==1?a.insert(A[i][j]):b.insert(A[i][j]);
            }
            
            t.push_back(a);
            t.push_back(b);
            p.insert(t);
            t.clear();
            a.clear();
            b.clear();
        }
        
        return p.size();
    }
};
