class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        //vector<vector<int>>ans(n,vector<int>(m));
        vector<int>oneRow(n,0),oneCol(m,0);//zeroRow(n,0),zeroCol(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    oneRow[i]+=grid[i][j];
                    oneCol[j]+=grid[i][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=2*(oneRow[i]+oneCol[j])-n-m;    //-zeroRow[i]-zeroCol[j];
            }
        }
        return grid;
    }
};