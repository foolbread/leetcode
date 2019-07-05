class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        bool flag = false;
        int l = a.size() > b.size() ? b.size() : a.size();
        int s = 0;
        string::reverse_iterator it = a.rbegin();
        string::reverse_iterator itt = b.rbegin();

        while (it != a.rend() || itt != b.rend())
        {
            if (it != a.rend() && itt != b.rend())
            {
                s = flag ? int(*it+*itt)+1 : int(*it+*itt);
                ret.push_back(char((s-0x60)%2+0x30));
                ++it;
                ++itt;
                if (s >0x61)
                    flag = true;
                else
                    flag = false;
            }
            else if (it != a.rend() && itt == b.rend())
            {
                s = flag ? int(*it)+1 : int(*it);
                ret.push_back(char((s-0x30)%2+0x30));
                ++it;
                if (s >0x31)
                    flag = true;
                else
                    flag = false;
            }
            else if (itt != b.rend() && it == a.rend())
            {
                s = flag ? int(*itt)+1 : int(*itt);
                ret.push_back(char((s-0x30)%2+0x30));
                ++itt;
                if (s >0x31)
                    flag = true;
                else
                    flag = false;
            }

        }

        if (flag)
            ret.push_back('1');

        reverse(ret.begin(),ret.end());

        return ret;
    }
};
