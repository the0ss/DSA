class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int ans=INT_MIN;
        int one=0,zero=0;
        for(auto c:s)
            if(c=='1') one++;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0')
                zero++;
            else
                one--;
            ans=max(ans,one+zero);
        }
        return ans;
    }
};