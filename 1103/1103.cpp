class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ret;
        ret.resize(num_people,0);

        int c = 1;
        int idx = 0;
        while (candies > c)
        {
            ret[idx++] += c;
            if (idx >= num_people)
                idx = 0;
            candies -= c;
            ++c;
        }

        if (candies > 0)
        {
            ret[idx] += candies;
        }

        return ret;
    }
};
