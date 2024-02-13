class LRUCache {
    int size;
    list<int>v;
    unordered_map<int,list<int>::iterator>m;
    unordered_map<int,int>m1;
public:
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            auto value=m1[key];
            v.erase(m[key]);
            v.push_front(key);
            m[key]=v.begin();
            // m1[key]=value;
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)==m.end()){
            if(size==v.size()){
                auto last=v.back();
                v.pop_back();
                m.erase(last);
                m1.erase(last);
            }
        }
        else
            v.erase(m[key]);
        v.push_front(key);
        m[key]=v.begin();
        m1[key]=value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */