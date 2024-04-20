class Solution {
    int n,m,sx,sy,ex,ey;
    void dfs(int i,int j,vector<vector<int>>&land){
        if(i<0||i>=n||j>=m||j<0||land[i][j]==0)
            return;
        land[i][j]=0;
        if((i-sx+1)*(j-sy+1)>(ex-sx+1)*(ey-sy+1)){
            ex=i;
            ey=j;
        }
        dfs(i+1,j,land);
        dfs(i-1,j,land);
        dfs(i,j+1,land);
        dfs(i,j-1,land);
    }
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        n=land.size();
        m=land[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]){
                    sx=i,sy=j;
                    ex=i,ey=j;
                    dfs(i,j,land);
                    ans.push_back({sx,sy,ex,ey});
                }
            }
        }
        return ans;
    }
};