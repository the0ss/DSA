class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int>m;
        int n=s.length();
        int ans=-1;
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end()){
                ans=max(ans,i-m[s[i]]-1);
                // m[s[i]]=i;
            }
            else{
                m[s[i]]=i;
            }
        }
        return ans;
    }
};