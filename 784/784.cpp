class Solution {
public:
    vector<string> ret;
    vector<string> letterCasePermutation(string S) {
        levelOrder(S,0);

        return ret;
    }

    void levelOrder(string S,int idx){
        for (int i=idx; i<S.size(); i++)
        {
            if (S[i] >= 'a' && S[i]<= 'z')
            {
                string t = S;
                t[i] = t[i] - 32;
                levelOrder(t,i+1);
            }

            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                string t = S;
                t[i] = t[i] + 32;
                levelOrder(t,i+1);
            }
        }

        ret.push_back(S);
    }
};
