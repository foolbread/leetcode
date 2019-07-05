class Solution {
public:
    int compress(vector<char>& chars) {
        int c = 1;
        int idx = 0;
        int ret = 0;
        for (int i=1; i<chars.size(); i++)
        {
            if (chars[idx] == chars[i])
            {
                ++c;
            }
            else
            {
                chars[ret++] = chars[idx];
                idx = i;
                if (c > 1)
                {
                    string t = to_string(c);
                    for (int j=0; j<t.size(); j++)
                        chars[ret++] = t[j];
                }
                c = 1;
            }
        }

        chars[ret++] = chars[idx];
        if (c > 1)
        {
            string t = to_string(c);
            for (int j=0; j<t.size(); j++)
                chars[ret++] = t[j];
        }


        return ret;
    }
};
