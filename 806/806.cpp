class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int linewidth = 100;
        int sumwidth = 0;
        int v = 0;
        for (int i=0; i<S.size(); i++)
        {
            v = widths[S[i]-'a'];
            sumwidth += v;
            if (sumwidth > linewidth){
                if ((sumwidth % linewidth) < v){
                    sumwidth = linewidth + v;
                }else{
                    linewidth += 100;
                }
            }
        }
            
        vector<int> ret;
        if (sumwidth % 100 > 0)
        {
            ret.push_back(sumwidth/100+1);
        }
        else
        {
            ret.push_back(sumwidth/100);
        }
        ret.push_back(sumwidth%100);
        
        return ret;
    }
};
