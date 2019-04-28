class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        bitset<200001> s;
        for (int i=0; i<candies.size(); i++)
        {
            s.set(candies[i]+100000);
        }
        
        int c = candies.size()/2;
        if (c < s.count())
        {
            return c;
        }
        
        return s.count();
    }
};
