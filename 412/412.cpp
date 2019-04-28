class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        string str;
        for (int i=1; i<=n; i++)
        {
            str.clear();
            if (i % 3 == 0)
            {
                str.append("Fizz");
            }
            
            if (i % 5 == 0)
            {
                str.append("Buzz");
            }
            
            if (str.size() == 0)
            {
                str = to_string(i);
            }
            
            ret.push_back(str);
        }
        
        return ret;
    }
};
