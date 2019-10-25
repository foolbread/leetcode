class Solution {
public:
    int tribonacci(int n) {
        vector<int> t_val{0,1,1};
        if (n<3)
            return t_val[n];
        t_val.reserve(n+1);

        for (int i=3;i<=n;i++)
        {
            t_val.push_back(t_val[i-3]+t_val[i-2]+t_val[i-1]);
        }

        return t_val.back();
    }
};
