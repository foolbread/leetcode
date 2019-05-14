class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ret;
        int sum = 0;

        for (int j=0; j<A.size(); j++)
        {
            if (A[j]%2 == 0)
            {
                sum += A[j];
            }
        }

        for (int i=0; i<queries.size(); i++)
        {
           if ((A[queries[i][1]]%2 == 0)&&(A[queries[i][1]]+queries[i][0])%2 == 0)
           {
                sum += queries[i][0];
           }
           else if((A[queries[i][1]]%2 != 0)&&(A[queries[i][1]]+queries[i][0])%2 == 0)
           {
                sum += (A[queries[i][1]]+queries[i][0]);
           }
           else if((A[queries[i][1]]%2 == 0)&&(A[queries[i][1]]+queries[i][0])%2 != 0)
           {
               sum -= A[queries[i][1]];
           }

           A[queries[i][1]] += queries[i][0];

           ret.push_back(sum);
        }

        return ret;
    }
};
