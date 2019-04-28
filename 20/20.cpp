class Solution {
public:
    bool isValid(string s) {
        if (s.empty())
        {
            return true;
        }
        
        vector<char> vc;
        for (string::iterator it = s.begin(); it != s.end(); it++)
        {
            switch(*it)
            {
                case '{':
                case '(':
                case '[':
                    vc.push_back(*it);
                    break;
                case '}':
                    {
                        if (vc.size() == 0)
                            return false;
                        
                        if (vc.back() != '{')
                            return false;
                        else
                            vc.pop_back();
                        break;
                    }
                case ')':
                    {
                        if (vc.size() == 0)
                            return false;
                        
                        if (vc.back() != '(')
                            return false;
                        else
                            vc.pop_back();
                        break;
                    }
                case ']':
                    {
                        if (vc.size() == 0)
                            return false;
                        
                        if (vc.back() != '[')
                            return false;
                        else
                            vc.pop_back();
                        break;
                    }
            }
            
        }
        
        if (vc.size() > 0)
            return false;
        
        return true;
    }
};
