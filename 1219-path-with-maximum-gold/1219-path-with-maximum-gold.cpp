class Solution {
    vector<int> dir={0,1,0,-1,0};
public:
    int dfs(vector<vector<int>> &grid,int i,int j)
    {
        int x,y,temp=grid[i][j],result=0;
        grid[i][j]=0;
        for(int d=0;d<4;d++)                    //Try all 4 possible directions
        {
            x=i+dir[d],y=j+dir[d+1];
            if(x>=0&&y>=0&&x<grid.size()&&y<grid[x].size()&&grid[x][y]!=0)
                result=max(result,grid[x][y]+dfs(grid,x,y));
        }
        grid[i][j]=temp;
        return result;
    }
    int getMaximumGold(vector<vector<int>>& grid) 
    {
        int ans=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]>0)
                    ans=max(grid[i][j]+dfs(grid,i,j),ans);   //Set grid[i][j] to 0 to mark this cell as visited and reset after the dfs ends.
        return ans;
    }
};