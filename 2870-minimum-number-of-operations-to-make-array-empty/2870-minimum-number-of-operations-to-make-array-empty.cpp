class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        for(auto [key,value]:m){
            if(value==1)
                return -1;
            while(value%3!=0){
                ans++;
                value-=2;
            }
            ans+=value/3;
        }
        return ans;
    }
};