class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ret;
        if (A.size() == 1)
        {
            for (int i=0; i<A[0].size(); i++)
                ret.push_back(string(1,A[0][i]));
        }

        vector<map<char,int>> vecmap;
        for (int i=0; i<A.size(); i++)
        {
            map<char,int> tm;
            for (int j=0; j<A[i].size(); j++)
            {
                tm[A[i][j]]++;
            }
            vecmap.push_back(tm);
        }

        int c = 0;

        for (map<char,int>::iterator it=vecmap[0].begin(); it!=vecmap[0].end(); it++)
        {
            c = it->second;
            for (int i=1; i<vecmap.size(); i++)
            {
                c = (c <  vecmap[i][it->first]) ? c : vecmap[i][it->first];
            }

            for (int i=0; i<c; i++)
                ret.push_back(string(1,it->first));
        }


        return ret;
    }
};
