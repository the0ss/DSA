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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int size=q.size();
            cnt++;
            while(size--){
                auto node=q.front();
                q.pop();
                if(cnt!=depth-1){
                    if(node->left)q.push(node->left);
                    if(node->right)q.push(node->right);
                }
                else{
                    TreeNode* newNode=new TreeNode(val);
                    newNode->left=node->left;
                    node->left=newNode;
                    
                    TreeNode* newNode2 =new TreeNode(val);
                    newNode2->right=node->right;
                    node->right=newNode2;
                }
            }
        }
        return root;
    }
};