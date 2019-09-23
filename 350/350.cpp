class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
        vector<int> ret;
        for (int i=0; i<nums1.size(); i++)
        {
            if (m1.count(nums1[i]) == 0)
                m1[nums1[i]] = 0;

            ++m1[nums1[i]];
        }

        for (int i=0; i<nums2.size(); i++)
        {
            if (m1.count(nums2[i]) > 0)
            {
                if (m1[nums2[i]] > 0)
                {
                    ret.push_back(nums2[i]);
                    --m1[nums2[i]];
                }
            }
        }

        return ret;
    }
};
