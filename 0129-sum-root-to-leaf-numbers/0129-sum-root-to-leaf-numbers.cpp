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
private:
    int ans=0;
    void dfs(TreeNode* root,int curr){
        if(!root->left&&!root->right)
            ans+=curr;
        if(root->left) dfs(root->left,curr*10+root->left->val);
        if(root->right) dfs(root->right,curr*10+root->right->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        dfs(root,root->val);
        return ans;
    }
};