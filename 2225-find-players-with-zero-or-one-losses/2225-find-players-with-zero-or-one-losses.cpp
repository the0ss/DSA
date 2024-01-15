class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>m;
        for(auto it:matches){
            if(m.find(it[0])==m.end())
                m[it[0]]=0;
            m[it[1]]++;
        }
        vector<vector<int>>ans(2);
        for(auto [key,value]:m){
            if(value==0)
                ans[0].push_back(key);
            else if(value==1)
                ans[1].push_back(key);
        }
        return ans;
    }
};