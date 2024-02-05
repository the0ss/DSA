class Solution {
public:
    int firstUniqChar(string s) {
        map<char,pair<int,int>>m;
        int n=s.length();
        int ans=n;
        for(int i=0;i<n;i++){
            m[s[i]].first++;
            m[s[i]].second=i;
        }
        for(auto [key,value]:m){
            if(value.first==1)
                ans=min(ans,value.second);
        }
        return ans==n?-1:ans;
    }
};