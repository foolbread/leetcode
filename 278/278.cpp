// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       if (isBadVersion(1))
           return 1;

       if (!isBadVersion(n-1)&&isBadVersion(n))
           return n;

       int left = 1;
       int right = n;
       int middle;
       int l = -1;
       int r = -1;

       while (true)
       {
           middle = left/2+right/2;
           if (isBadVersion(middle))
           {
               right = middle-1;
               r = middle;
           }
           else
           {
               l = middle;
               left = middle+1;
           }

           if (r-l < 100)
           {
               for (int i=l+1; i<=r; i++)
               {
                   if (isBadVersion(i))
                       return i;
               }
           }
       }

       return r;
    }
};
