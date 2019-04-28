class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> val;
        int n;
        int sum = 0;
        for (size_t i=0; i!=ops.size(); i++)
        {
            if (ops[i] == "C")
            {
                sum -= val[val.size()-1];
                val.pop_back();
            }
            else if (ops[i] == "D")
            {
                sum = sum + 2*val[val.size()-1];
                val.push_back(val[val.size()-1]*2);
            }
            else if(ops[i] == "+")
            {
                sum = sum + val[val.size()-1] + val[val.size()-2];
                val.push_back(val[val.size()-1] + val[val.size()-2]);
            }
            else
            {
                n = atoi(ops[i].c_str());
                sum += n;
                val.push_back(n);
            }
            
        }
        
        return sum;
    }
};
