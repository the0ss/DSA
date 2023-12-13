class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        // for(auto [key,value]:m){
        //     pq.push({value,key});
        // }
         vector<int>ans;
        // while(k--){
        //     auto node=pq.top();
        //     pq.pop();
        //     ans.push_back(node.second);
        // }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto [key,value]:m){
            bucket[value].push_back(key);
        }
        for(int i=nums.size();i>=0&&ans.size()<k;i--){
            if(!bucket[i].empty()){
                ans.insert(ans.end(),bucket[i].begin(),bucket[i].end());
            }
        }
        return ans;
    }
};