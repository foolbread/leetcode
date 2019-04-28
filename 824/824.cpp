class Solution {
public:
    string toGoatLatin(string S) {
        string ret;
        int c=1;
        bool head = true;
        bool vowel = false;
        char consonant;
        for (int i=0; i<S.size(); i++)
        {
            if (S[i] == ' ')
            {
                c++;
                head = true;
                vowel = false;
                ret.push_back(' ');
                continue;
            }
            
            if (head)
            {
                switch (S[i])
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                        {                        
                            ret.push_back(S[i]);
                            vowel = true;
                            break;
                        }
                    default:
                        consonant = S[i];
                }
                
                head = false;
            }
            else
            {
                ret.push_back(S[i]);
            }
            
            if (i+1 == S.size() || S[i+1] == ' ')
            {
                if (!vowel)
                {
                    ret.push_back(consonant);
                }
                
                ret.append("ma");
                for (int j=0; j<c; j++)
                    ret.push_back('a');
            }
        }
        
        return ret;
    }
    
};
