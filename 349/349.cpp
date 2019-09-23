class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
        map<int,int> m2;
        vector<int> ret;
        for (int i=0; i<nums1.size(); i++)
            m1[nums1[i]] = 1;

        for (int j=0; j<nums2.size(); j++)
        {
             if(m1.count(nums2[j])>0 && m2.count(nums2[j]) == 0)
           {
                ret.push_back(nums2[j]);
                m2[nums2[j]] = 1;
           }
        }

        return ret;
    }
};
