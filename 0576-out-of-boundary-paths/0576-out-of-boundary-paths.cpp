class Solution {
    int mod=1e9+7;
    int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    int row,col;
    int dp[52][52][52];
    int dfs(int i,int j,int maxMove){
        if(i<0||i>=row||j<0||j>=col)
            return 1;
        if(maxMove<=0)
            return 0;
        int &res=dp[maxMove][i][j];
        if(res!=-1)
            return res;
        res=0;
        for(int s=0;s<4;s++){
            int x=i+dir[s][0];
            int y=j+dir[s][1];
            res=(res+dfs(x,y,maxMove-1))%mod;
        }
        return res;
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1, sizeof dp);
        row=m,col=n;
        return dfs(startRow,startColumn,maxMove);
    }
};