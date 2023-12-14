class Solution {
    int n,m,ans=0,empty=1;
    void dfs(vector<vector<int>>& grid,int i,int j,int cnt){
        if(i>=n||i<0||j>=m||j<0||grid[i][j]==-1) 
            return;
        if(grid[i][j]==2){
            if(cnt==empty){
                ans++;
            }
            return;
        }
        grid[i][j]=-1;
        cnt++;
        dfs(grid,i-1,j,cnt);
        dfs(grid,i,j-1,cnt);
        dfs(grid,i+1,j,cnt);
        dfs(grid,i,j+1,cnt);
        grid[i][j]=0;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int x,y;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) x=i,y=j;
                else if(grid[i][j]==0) empty++;
            }
        }
        dfs(grid,x,y,0);
        return ans;
    }
};