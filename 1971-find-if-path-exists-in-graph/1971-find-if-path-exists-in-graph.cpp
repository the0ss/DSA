class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        vector<vector<int>>graph(n,vector<int>());
        vector<bool>vis(n,false);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        stack<int>s;
        s.push(source);
        while(!s.empty()){
            int curr=s.top();
            s.pop();
            if(curr==dest)return true;
            vis[curr]=true;
            for(int i=0;i<graph[curr].size();i++){
                if(!vis[graph[curr][i]])
                    s.push(graph[curr][i]);
            }
        }
        return false;
    }
};