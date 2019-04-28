class Solution {
public:
    // M : 1000
    // D : 500
    // C : 100
    // L : 50
    // X : 10
    // V : 5
    // I : 1
    
    int romanToInt(string s) {
        int ret = 0;
        int len = s.size();
        
        for (int i = 0; i < len; ++i)
        {
            ret += this->getValue(s[i]);
            
            if (i > 0)
            {
                if (this->getValue(s[i-1]) < this->getValue(s[i]))
                {
                    ret -= (this->getValue(s[i-1]) * 2);
                }
            }
        }
        
        return ret;
    }
    
    int getValue(char ch)
    {
        switch (ch)
        {
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
        }
    }
};
