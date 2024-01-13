class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        int n=s.length();
        for(auto it:s){
            m[it]++;
        }
        int cnt=0;
        for(auto it:t){
            if(m.find(it)!=m.end())
                m[it]--;
        }
        for(auto [key,value]:m){
            if(value>0)
                cnt+=value;
        }
        return cnt;
    }
};