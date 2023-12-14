class Trie {
public:
    Trie* children[26] = {};
    bool isWord = false;
    string wordVal = "";
    void insert(string& s, int pos = -1) {
        auto temp = this;
        while(++pos < s.length() && temp->children[s[pos]-'a']) temp = temp->children[s[pos]-'a']; 
        pos--;
        while(++pos != s.length()) temp = temp->children[s[pos]-'a'] = new Trie;
        temp->isWord = true;
        temp->wordVal = s;
    }
};
class Solution {
public:
    int vis[13][13] = {};
    void dfs(vector<vector<char>>& board, vector<string>& ans, int i, int j, Trie* root){
        if(root->isWord){
            ans.push_back(root->wordVal);
            root->isWord = false;
        }
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1 || vis[i][j]) return;
        vis[i][j] = 1;
        if(root->children[board[i][j]-'a']){
            dfs(board, ans, i+1, j, root->children[board[i][j]-'a']);
            dfs(board, ans, i-1, j, root->children[board[i][j]-'a']);
            dfs(board, ans, i, j+1, root->children[board[i][j]-'a']);
            dfs(board, ans, i, j-1, root->children[board[i][j]-'a']);
        }
        vis[i][j] = 0;
}
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie root;
        vector<string> ans;
        for(auto i : words) root.insert(i);
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++) dfs(board, ans, i, j, &root);
        return ans;
    }
};