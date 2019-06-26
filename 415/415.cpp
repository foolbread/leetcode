class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1.size() == 0)
            return num2.size() != 0 ? num2 : "";
        if (num2.size() == 0)
            return num1.size() != 0 ? num1 : "";

        string ret;
        bool flag = false;
        string::reverse_iterator it1 = num1.rbegin();
        string::reverse_iterator it2 = num2.rbegin();
        int a,b = 0;
        while (it1 != num1.crend() || it2 != num2.crend())
        {
            if (it1 != num1.crend())
            {
                a = *it1 - 0x30;
                ++it1;
            }

            if (it2 != num2.crend())
            {
                b = *it2 - 0x30;
                ++it2;
            }

            a = flag ? a=a+b+1:a=a+b;
            flag = false;
            if (a >= 10)
            {
                a = a % 10;
                flag = true;
            }

            ret.push_back(char(a+0x30));
            a=0;
            b=0;
        }

        if (flag)
            ret.push_back('1');

        reverse(ret.begin(),ret.end());

        return ret;
    }
};
