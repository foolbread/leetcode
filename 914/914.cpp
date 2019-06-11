class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if (deck.size()<2)
            return false;

        map<int,int> m;
        for (int i=0; i<deck.size(); i++)
        {
            m[deck[i]]++;
        }

        int t = 0;
        for (auto it=m.begin(); it!=m.end(); it++)
        {
            t = gcd(it->second,t);
        }

        return t>1;
    }
};
