class Solution {
public:
    bool isHappy(int n) {
        if (n == 1)
            return true;
            
        if (m_set.count(n) > 0)
            return false;
        
        int d = 0;
        int s = 0;
        while (n/10 > 0)
        {
            s = n%10;
            n /= 10;
            d += s*s;
        }
        
        s = n%10;
        d += s*s;
        
        if (d == 1)
            return true;
        
        m_set.insert(n);
        isHappy(d);
    }
private:
    unordered_set<int> m_set;
    
};
