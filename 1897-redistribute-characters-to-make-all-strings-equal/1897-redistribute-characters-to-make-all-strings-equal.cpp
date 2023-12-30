class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>m;
        for(auto word:words){
            for(auto it:word)
                m[it]++;
        }
        int n=words.size();
        for(auto [key,value] :m){
            if(value%n!=0)
                return false;
        }
        return true;
    }
};