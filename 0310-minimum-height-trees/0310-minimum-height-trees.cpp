class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
            indegree[i[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
            if(indegree[i]==1) q.push(i),indegree[i]--;
        vector<int>ans;
        while(!q.empty()){
            ans.clear();
            int s=q.size();
            for(int i=0;i<s;i++){
                int node=q.front();q.pop();
                ans.push_back(node);
                for(auto it:adj[node]){
                    indegree[it]--;
                    if(indegree[it]==1) q.push(it);
                }
            }
        }
        if(n==1) ans.push_back(0);
        return ans;
    }
};