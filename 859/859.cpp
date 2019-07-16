class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size())
            return false;

        if (A.compare(B) == 0)
        {
            set<char> tmp;
            for (int i=0; i<A.size(); i++)
            {
                if (tmp.count(A[i]) > 0)
                    return true;
                else
                    tmp.insert(A[i]);
            }

            return false;
        }

        vector<int> vt;
        for (int i=0,j=0; i<A.size(); i++,j++)
        {
            if (A[i] != B[j])
            {
                vt.push_back(i);
                if (vt.size()>2)
                    return false;
            }
        }

        return  A[vt[0]] == B[vt[1]] && A[vt[1]] == B[vt[0]];
    }
};
