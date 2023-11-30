class Solution {
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&left,vector<int>&up,vector<int>&down,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int r=0;r<n;r++){
            if(left[r]==0&&up[r+col]==0&&down[n-1+col-r]==0){
                left[r]=1;
                up[r+col]=1;
                down[n-1+col-r]=1;
                board[r][col]='Q';
                solve(col+1,board,ans,left,up,down,n);
                left[r]=0;
                up[r+col]=0;
                down[n-1+col-r]=0;
                board[r][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        vector<int>left(n,0),up(2*n-1,0),down(2*n-1,0); //crearing hashing for dealing with S.C.
        solve(0,board,ans,left,up,down,n);
        return ans;
    }
};