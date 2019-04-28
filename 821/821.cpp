class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> ret(S.size(),-1);
    int head = -1;
    int tail = -1;
    for (int i=0; i<S.size(); i++)
    {
        if (S[i] == C)
        {
            if (head < 0)
            {
                head = i;
                tail = i;
            }
            else
            {
                int next = head;
                while (ret[next] >= 0)
                {
                    next = ret[next];
                }
                
                ret[next] = i;
                tail = i;
            }
        }
    }
    
    for (int i=0; i<S.size(); i++)
    {
        if (i <= head)
        {
            if (i < head)
                ret[i] = head-i;
            continue;
        }
        
        if (i > tail)
        {
            ret[i] = i-tail;
            continue;
        }

        
        if (S[i] == C)
            continue;
        
        int next = ret[head];
        int pre = head;
        while(next < i && tail > i)
        {
            pre = next;
            next = ret[next];
        }
        
        ret[i] = i-pre < next-i ? i-pre : next-i;
    }
    
    int t;
    while(ret[head] >= 0)
    {
        t = ret[head];
        ret[head] = 0;
        head = t;
    }
    ret[tail] = 0;
    
    return ret;

    }
};
