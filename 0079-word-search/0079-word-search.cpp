class Solution {
public:
    bool dfs(vector<vector<char>>&board,string word,int i,int j,int ind){
        if(ind==word.size())
            return true;
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[ind])
            return false;
        board[i][j]='*';
        bool res=dfs(board,word,i-1,j,ind+1)||dfs(board,word,i,j-1,ind+1)||dfs(board,word,i+1,j,ind+1)||dfs(board,word,i,j+1,ind+1);
        board[i][j]=word[ind];
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]&&dfs(board,word,i,j,0))
                    return true;
            }
        return false;
    }
};