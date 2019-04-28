class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int cols = matrix[0].size();
        int rows = matrix.size();
        
        int r;
        int c;
        int d;
        cout << "cols:"<<cols<<" "<<"rows:"<<rows<<endl;
        for (int j=0;j<cols;j++)
        {
            r = 0;
            c = j;
            d = matrix[r][c];
            
            while(c<cols && r<rows)
            {
                cout << c << " " << r << endl;
                if (d != matrix[r][c])
                    return false;
                
                c++;
                r++;
            }
        }
        
        for (int j=1;j<rows;j++)
        {
            c = 0;
            r = j;
            d = matrix[r][c];
            while(c<cols && r<rows)
            {
                if (d != matrix[r][c])
                    return false;
                
                c++;
                r++; 
            }
        }
        
        return true;
    }
};
