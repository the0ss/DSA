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
    vector<TreeNode*>v;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
    TreeNode* makeBST(int start,int end){
        if(start>end) return nullptr;
        int mid=(start+end)/2;
        TreeNode* root=v[mid];
        root->left=makeBST(start,mid-1);
        root->right=makeBST(mid+1,end);
        return root;
        
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return makeBST(0,v.size()-1);
    }
};