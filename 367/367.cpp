class Solution {
public:
    bool isPerfectSquare(int num) {
        int a = num%10;
        cout << "zzz:" << a << endl;
        if (a!=0 && a!=1 && a!=4 && a!=5 && a!=6 && a!=9)
            return false;

        int n = 1;
        while (num > 0)
        {
            num -= n;
            if (num == 0)
                return true;

            n += 2;
        }

        return false;
    }
};
