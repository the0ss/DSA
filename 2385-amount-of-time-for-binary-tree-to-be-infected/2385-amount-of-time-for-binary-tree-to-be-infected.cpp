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
    unordered_map<int,vector<int>> v;  //adjacency list

    void createGraph(TreeNode* root,int parent=-1){
        if(!root) return;
        int value= root->val;
        if(parent!=-1){
            v[parent].push_back(value);
            v[value].push_back(parent);
        }
        createGraph(root->left, value);
        createGraph(root->right, value);
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        //create graph of given tree
        createGraph(root);

        queue<int> q;
        unordered_map<int,bool> seen;
        q.push(start);
        seen[start]=true;
        int time=0;
        while(!q.empty()) {
            int n= q.size();
            while(n--){
                auto node= q.front();  q.pop();
                for(auto i:v[node]){
                    if(!seen[i]){
                        q.push(i);
                        seen[i]=true;
                    }
                }
            }
            time++;
        }
        return time-1;
    }
};