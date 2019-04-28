class Solution {
public:
    string reverseOnlyLetters(string S) {
        //0x41~0x5a 0x61~0x7a
        if (S.size() <= 1)
            return S;
        
        int tail = S.size()-1;
        string ret(S.size(),'a');
        for (int i=0;i<S.size();i++)
        {
            if (i == tail)
            {
                ret[i] = S[i];
                break;
            }
            
            if ((S[i]>='A'&&S[i]<='Z')||(S[i]>='a'&&S[i]<='z'))
            {
                while(tail >= i)
                {
                    if ((S[tail]>='A'&&S[tail]<='Z')||(S[tail]>='a'&&S[tail]<='z'))
                    {
                        ret[tail] = S[i];
                        ret[i] = S[tail];
                        tail--;
                        break;
                    }
                    else
                    {
                        ret[tail] = S[tail];
                        tail--;
                    }
                }
            }
            else
            {
                ret[i] = S[i];
            }
        }
        
        return ret;
    }
};
