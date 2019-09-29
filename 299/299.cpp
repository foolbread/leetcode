class Solution {
public:
    string getHint(string secret, string guess) {
        int Acnt = 0;
        int Bcnt = 0;
        int nums[10];
        memset(nums,0,sizeof(int)*10);
        for (int i=0; i<secret.size(); i++)
        {
            ++nums[secret[i]-'0'];
            if (secret[i] == guess[i])
            {
                ++Acnt;
            }

            --nums[guess[i]-'0'];
        }

        int t = 0;
        for (int i=0; i<10; i++)
        {
            if (nums[i] > 0)
                t += nums[i];
        }

        Bcnt = secret.size()-t-Acnt;

        string ret;
        ret.append(to_string(Acnt));
        ret.push_back('A');
        ret.append(to_string(Bcnt));
        ret.push_back('B');
        return ret;
    }
};
