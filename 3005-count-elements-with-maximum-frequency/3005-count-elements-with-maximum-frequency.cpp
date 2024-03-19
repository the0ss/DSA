class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=INT_MIN;
        for(auto it:nums){
            m[it]++;
            maxi=max(maxi,m[it]);
        }
        int ans=0;
        for(auto [key,value]:m){
            if(value==maxi)
                ans+=value;
        }
        return ans;
    }
};