/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    // Node* dfs(Node* cur,unordered_map<Node*,Node*>& mp)
    // {
    //     vector<Node*> neighbour;
    //     Node* clone=new Node(cur->val);
    //     mp[cur]=clone;
    //     for(auto it:cur->neighbors){
    //         if(mp.find(it)!=mp.end()){
    //             neighbour.push_back(mp[it]);
    //         }
    //         else
    //             neighbour.push_back(dfs(it,mp));
    //     }
    //     clone->neighbors=neighbour;
    //     return clone;
    // }
    Node* cloneGraph(Node* node) {
        // unordered_map<Node*,Node*> mp;
        // if(node==NULL)
        //     return NULL;
        // if(node->neighbors.size()==0){
        //     Node* clone= new Node(node->val);
        //     return clone; 
        // }
        // return dfs(node,mp);
        if(node==NULL)
            return NULL;
        queue<Node*> q;
        int visited[105];
        memset(visited, 0, sizeof(visited));
        Node* root_node = new Node(node->val);
        q.push(node);
        visited[node->val]=1;

        map<Node*, Node*> mp;
        mp[node]= root_node;
       
        while(!q.empty())
        {
            Node* temp= q.front();
            q.pop();
            
            for(auto child: temp->neighbors)
            {
                if(visited[child->val]==0)
                {
                    Node *new_node= new Node(child->val);
                    visited[child->val]=1;
                    mp[child]=new_node;
                    q.push(child);
                }
                mp[temp]->neighbors.push_back(mp[child]);
            }
        }
        return root_node;
    }
};