class MyHashSet {
public:
    char data[125000];
    /** Initialize your data structure here. */
    MyHashSet() {
        memset(data,0,sizeof(char)*125000);
    }

    void add(int key) {
        int idx = key/8;
        int bit = key%8;
        data[idx] = data[idx] | (1<<bit);
    }

    void remove(int key) {
        int idx = key/8;
        int bit = key%8;
        data[idx] = data[idx] & ~(1<<bit);
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int idx = key/8;
        int bit = key%8;
        return data[idx] & (1<<bit);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
