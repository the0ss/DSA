class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<int>adj[V];
        vector<int>ind(V,0);
        queue<int>q;
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
            ind[it[0]]++;
        }
        for(int i=0;i<V;i++){
            if(ind[i]==0) q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node]){
                ind[it]--;
                if(ind[it]==0) q.push(it);
            }
        }
        return cnt==V;
    }
};