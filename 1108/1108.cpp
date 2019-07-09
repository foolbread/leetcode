class Solution {
public:
    string defangIPaddr(string address) {
        string ret;
        for (int i=0; i<address.size(); i++)
        {
            if (address[i] == '.')
            {
                ret.push_back('[');
                ret.push_back('.');
                ret.push_back(']');
            }
            else
            {
                ret.push_back(address[i]);
            }
        }

        return ret;
    }
};
