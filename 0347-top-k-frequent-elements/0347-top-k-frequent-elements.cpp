class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        for(auto [key,value]:m){
            pq.push({value,key});
        }
        vector<int>ans;
        while(k--){
            auto node=pq.top();
            pq.pop();
            ans.push_back(node.second);
        }
        return ans;
    }
};