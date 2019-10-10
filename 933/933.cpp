class RecentCounter {
public:
    deque<int> rcque;
    RecentCounter() {

    }

    int ping(int t) {
        rcque.push_back(t);
        while (true)
        {
            if (rcque.front() < t-3000)
                rcque.pop_front();
            else
                return rcque.size();
        }

        return 1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
