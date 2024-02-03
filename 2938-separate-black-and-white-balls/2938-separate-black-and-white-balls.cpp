class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        int n=s.length();
        int cnt=0;
        for(int i=n-1;i>-1;i--){
            if(s[i]=='1'){
                cnt++;
                ans+=n-i-cnt;
            }
        }
        return ans;
    }
};