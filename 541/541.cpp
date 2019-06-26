class Solution {
public:
    string reverseStr(string s, int k) {
        string ret;
        ret.reserve(s.size());
        int n = s.size();
        int idx = 0;
        while (idx+2*k < n)
        {
            for (int i=idx+k-1; i>=idx; i--)
                ret.push_back(s[i]);
            ret.append(s.substr(idx+k,k));
            idx += 2*k;
        }

        if (idx < n)
        {
            if (n-idx < k)
            {
                for(int i=n-1; i>=idx; i--)
                    ret.push_back(s[i]);
            }
            else
            {
                for (int i=idx+k-1; i>=idx; i--)
                    ret.push_back(s[i]);

                ret.append(s.substr(idx+k));
            }
        }

        return ret;
    }
};
