class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> ret;
        vector<int> queries_val;
        queries_val.reserve(queries.size());
        vector<int> words_val;
        words_val.reserve(words_val.size());

        for (int i=0; i<queries.size(); i++)
        {
            queries_val.push_back(Sfunc(queries[i]));
        }

        for (int i=0; i<words.size(); i++)
        {
            words_val.push_back(Sfunc(words[i]));
        }

        int c = 0;
        for (int i=0; i<queries_val.size(); i++)
        {
            c = 0;
            for (int j=0; j<words_val.size(); j++)
            {
                   if (queries_val[i] < words_val[j])
                       ++c;
            }
            ret.push_back(c);
        }

        return ret;
    }

    int Sfunc(string str){
        map<char,int> statismap;
        for (int i=0; i<str.size(); i++)
        {
            if (statismap.count(str[i]) == 0)
                statismap[str[i]] = 0;
            ++statismap[str[i]];
        }

        return statismap.begin()->second;
    }
};
