class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        string tmp = A;
        int ret = 1;
        while(tmp.size()<B.size())
        {
            tmp.append(A);
            ++ret;
        }

        if (tmp.find(B) != string::npos)
            return ret;

        while (tmp.size()<=A.size()+B.size())
        {
            tmp.append(A);
            ++ret;

            if (tmp.find(B) != string::npos)
                return ret;
        }

        return -1;
    }
};
