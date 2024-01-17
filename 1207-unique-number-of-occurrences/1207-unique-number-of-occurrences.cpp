class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_set<int> s;
        for (auto n : arr) 
            ++m[n];
        for (auto& [key,value] : m) 
            s.insert(value);
        return m.size() == s.size();
    }
};