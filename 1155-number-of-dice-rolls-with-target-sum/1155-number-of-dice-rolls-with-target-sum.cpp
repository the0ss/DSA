class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int mod=1e9+7;
        vector<int>dp(target+1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            vector<int>temp(target+1);
            for(int j=1;j<=k;j++){
                for(int p=j;p<=target;p++)
                    temp[p]=(temp[p]+dp[p-j])%mod;
            }
            swap(dp,temp);
        }
        return dp[target];
    }
};