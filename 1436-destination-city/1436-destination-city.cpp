class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string>m;
        for(auto it:paths){
            m[it[0]]=it[1];
        }
        string x=paths[0][0];
        while(m.find(x)!=m.end()){
            x=m[x];
        }
        return x;
    }
};