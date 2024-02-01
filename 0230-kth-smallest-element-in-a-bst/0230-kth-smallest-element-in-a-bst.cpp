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
    vector<int>ans;
    void solve(TreeNode* root){
        if(!root) return;
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        solve(root);
        if(k>ans.size())
            return -1;
        return ans[k-1];
    }
};