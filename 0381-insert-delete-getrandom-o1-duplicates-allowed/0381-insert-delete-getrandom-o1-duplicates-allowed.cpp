class RandomizedCollection {
    vector<pair<int,int>>v;
    unordered_map<int,vector<int>>m;
public:
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        auto result=m.find(val)==m.end();
        m[val].push_back(v.size());
        v.push_back({val,m[val].size()-1});
        return result;
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())
            return false;
        auto last=v.back();
        m[last.first][last.second]=m[val].back();
        v[m[val].back()]=last;
        m[val].pop_back();
        if(m[val].empty()) m.erase(val);
        v.pop_back();
        return true;
        
    }
    
    int getRandom() {
        return v[rand()%v.size()].first;
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */