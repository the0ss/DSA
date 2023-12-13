class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size(),m=mat[0].size();
        vector<int>row(n,0),col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i]+=mat[i][j];
                col[j]+=mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(row[i]==1){
                for(int j=0;j<m;j++){
                    if(col[j]==1&&mat[i][j]==1){
                        ans++;
                        col[j]=0;
                    }
                }
            }
        }
        return ans;
    }
};