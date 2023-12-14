class Trie {
private:
    unordered_set<string>s;
public:
    Trie() {}
    
    void insert(string word) {
        s.insert(word);
    }
    
    bool search(string word) {
        return s.count(word);
    }
    
    bool startsWith(string prefix) {
        for(auto x: s){
            if(x.size() < prefix.size()) continue;
            int i = 0;
            while(i < prefix.size() && x[i] == prefix[i]) i++;
            if(i == prefix.size()) return true; 
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */