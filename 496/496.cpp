class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ret;
        map<int,int> numMap;
        for (int i=0; i<nums.size(); i++)
        {
            numMap[nums[i]] = i;
        }
        
        int idx = 0;
        int def = -1;
        for (vector<int>::iterator it=findNums.begin(); it!=findNums.end(); it++)
        {
            idx = numMap[*it];
            for (;idx<nums.size();idx++)
            {
                if (nums[idx] > *it)
                {
                    def = nums[idx];
                    break;
                }
            }
            
            ret.push_back(def);
            def = -1;
        }
        
        return ret;
    }
};
