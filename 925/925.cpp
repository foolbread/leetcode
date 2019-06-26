class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (name.size() > typed.size() || name.size() == 0 || typed.size() == 0)
            return false;

        if (name[0] != typed[0])
            return false;

        char pre = name[0];
        int idx = 1;
        for (int i=1; i<name.size(); i++)
        {
            if (idx >= typed.size())
                return false;

            for (int j=idx; j<typed.size(); j++)
            {
                if (typed[j] != name[i] && typed[j] != pre)
                {
                    return false;
                }

                if (typed[j] == name[i])
                {
                    idx = j+1;
                    break;
                }

                if (j == typed.size()-1)
                {
                    return false;
                }
            }

            pre = name[i];
        }

        if (idx < typed.size()-1)
        {
            for (int j=idx; j<typed.size(); j++)
            {
                if (typed[j] != pre)
                    return false;
            }
        }
        return true;
    }
};
