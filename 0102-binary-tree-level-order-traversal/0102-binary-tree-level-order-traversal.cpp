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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>curr;
        vector<vector<int>>ans;
        while(!q.empty()){
            auto ele=q.front();
            q.pop();
            if(ele==NULL){
                ans.push_back(curr);
                curr.resize(0);
                if(q.size()>0)
                    q.push(NULL);
            }
            else{
                curr.push_back(ele->val);
                if(ele->left) q.push(ele->left);
                if(ele->right) q.push(ele->right);
            }
        }
        return ans;
    }
};