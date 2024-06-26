class Solution {
public:
    vector<unordered_set<int>>tree;
    vector<int>res,count;
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        tree.resize(n);
        res.assign(n,0);
        count.assign(n,1);
        for(auto i:edges){
            tree[i[0]].insert(i[1]);
            tree[i[1]].insert(i[0]);
        }
        dfs(0,-1);
        dfs2(0,-1);
        return res;
    }
    void dfs(int root,int pre){
        for(auto&i:tree[root]){
            if(i==pre) continue;
            dfs(i,root);
            count[root]+=count[i];
            res[root]+=count[i]+res[i];
        }
    }
    void dfs2(int root,int pre){
        for(auto&i:tree[root]){
            if(i==pre)continue;
            res[i]=res[root]-count[i]+count.size()-count[i];
            dfs2(i,root);
        }
    }
};