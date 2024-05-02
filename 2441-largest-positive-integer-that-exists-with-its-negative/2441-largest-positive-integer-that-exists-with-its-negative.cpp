class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=-1;
        for(auto it:nums){
            if(m.find(-it)!=m.end())
                ans=max(ans,abs(it));
            else
                m[it]=1;
        }
        return ans;
    }
};