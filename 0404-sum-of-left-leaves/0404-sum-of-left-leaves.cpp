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
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*,bool>>q;
        q.push({root,false});
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto [node,isLeft]=q.front();
                q.pop();
                if(!node->left&&!node->right&&isLeft)
                    ans+=node->val;
                if(node->left)q.push({node->left,true});
                if(node->right)q.push({node->right,false});
            }
        }
        return ans;
    }
};