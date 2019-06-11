class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if (A.size() < 3)
            return false;

        int t = A[0];
        bool model = false;
        for (int i=1; i<A.size(); i++)
        {
            if (!model)
            {
                if (t >= A[i])
                {
                    if (i == 1)
                        return false;
                    model = true;
                }


                if (i == A.size()-1)
                    return t > A[i];


            }
            else
            {
                if (t <= A[i])
                    return false;
            }

            t = A[i];
        }

        return true;
    }
};
