class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        map<int,int>m;
        for(auto it:arr)
            m[it]++;
        for(auto [key,value]:m)
            pq.push({value,key});
        while(k){
            auto node=pq.top();
            pq.pop();
            if(node.first<=k)
                k-=node.first;
            else{
                node.first-=k;
                k=0;
                pq.push(node);
            }
        }
        return pq.size();
    }
};
