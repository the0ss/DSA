class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<int,int>m;
        int ans=0;
        int count=0;
        for(auto it:tasks){
            m[it]++;
            count=max(count,m[it]);
        }
        ans=(count-1)*(n+1);
        for(auto [key,value]:m){
            if(value==count)ans++;
        }
        return max((int)tasks.size(),ans);
    }
};