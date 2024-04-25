class Solution {
public:
    int longestIdealString(string s, int k) {
        int ans=0;
        int dp[150]={0};
        for(auto i:s){
            for(int j=i-k;j<=i+k;j++)
                dp[i]=max(dp[j],dp[i]);
            ans=max(ans,++dp[i]);
        }
        return ans;
    }
};