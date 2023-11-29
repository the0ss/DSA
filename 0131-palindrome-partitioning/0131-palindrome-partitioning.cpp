class Solution {
    bool isPalin(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    void solve(int index,string s,vector<vector<string>>&ans,vector<string>ds){
        if(index==s.length()){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<s.length();i++){
            if(isPalin(s,index,i)){
                ds.push_back(s.substr(index,i-index+1));
                solve(i+1,s,ans,ds);
                ds.pop_back();
            }

        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        solve(0,s,ans,{});
        return ans;
    }
};