#include <cctype>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ret;
        
        for (int i=0; i<words.size(); i++)
        {
            string str = words[i];
            int v[3] = {0,0,0};
            bool flag = true;
            for (int j=0; j<str.size(); j++)
            {
                switch (tolower(str[j]))
                {
                    case 'q':
                    case 'w':
                    case 'e':
                    case 'r':
                    case 't':
                    case 'y':
                    case 'u':
                    case 'i':
                    case 'o':
                    case 'p':
                        v[0] = 1;
                        break;
                    case 'a':
                    case 's':
                    case 'd':
                    case 'f':
                    case 'g':
                    case 'h':
                    case 'j':
                    case 'k':
                    case 'l':
                        v[1] = 1;
                        break;
                    case 'z':
                    case 'x':
                    case 'c':
                    case 'v':
                    case 'b':
                    case 'n':
                    case 'm':
                        v[2] = 1;
                        break;
                }
                
                if (v[0]+v[1]+v[2] != 1)
                {
                    flag = false;
                    break;
                }
            }
            
            if (flag)
            {
                ret.push_back(words[i]);
            }
        }
        
        return ret;
    }
};
