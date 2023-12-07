class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,INT_MIN),col(n,INT_MIN);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                row[i]=max(row[i],grid[i][j]);
                col[j]=max(col[j],grid[i][j]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int prev=grid[i][j];
                grid[i][j]=min(row[i],col[j]);
                ans+=grid[i][j]-prev;
            }
        }
        return ans;
    }
};