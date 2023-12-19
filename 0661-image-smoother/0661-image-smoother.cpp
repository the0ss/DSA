class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>>ans=img;
        int n=img.size(),m=img[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                int cnt=0,sum=0;
                for(int x=max(i-1,0);x<min(i+2,n);x++)
                    for(int y=max(j-1,0);y<min(j+2,m);y++)
                        sum+=img[x][y],cnt++;
                
                ans[i][j]=sum/cnt;
            }
        }
        return ans;
    }
};