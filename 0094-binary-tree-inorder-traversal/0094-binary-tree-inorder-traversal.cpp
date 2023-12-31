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
public:
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
            return {};
        TreeNode* curr=root;
        stack<TreeNode*>s;
        vector<int>ans;
        while(curr||!s.empty()){
            while(curr){
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
        return ans;
    }
};