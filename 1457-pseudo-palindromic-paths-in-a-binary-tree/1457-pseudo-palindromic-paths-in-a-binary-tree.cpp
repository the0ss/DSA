/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans=0;
    void dfs(TreeNode* root,vector<int>freq){
        if(!root){
            return;
        }
        freq[root->val-1]++;
        dfs(root->left,freq);
        dfs(root->right,freq);
        if(!root->left&&!root->right){
            int odds=0;
            for(auto it:freq)
                if(it&1)
                    odds++;
            if(odds<=1)
                ans++;
            return;
        }
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(9);
        dfs(root,freq);
        return ans;
    }
};