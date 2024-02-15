class Solution {
private:
    int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    void dfs(int i,int j,vector<vector<int>>&grid,set<pair<int,int>>&s){
        int n=grid.size();
       // if(i<0||i>=n||j<0||j>=n||grid[i][j]!=1) return;
        grid[i][j]=2;
        s.insert({i,j});
        for(int k=0;k<4;k++){
            int r=i+dirs[k][0],c=j+dirs[k][1];
            if(r>=0&&r<n&&c>=0&&c<n&&grid[r][c]==1)
                dfs(r,c,grid,s);
        }
    }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        set<pair<int,int>>s1,s2;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid,s1);
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid,s2);
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        int ans=INT_MAX;
        for(auto i:s1)
            for(auto j:s2){
                int x=abs(i.first-j.first)+abs(i.second-j.second);
                ans=min(ans,x);
            }
        return ans-1;
    }
};