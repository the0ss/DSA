class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<int>freq(201,0);
        int maxi=INT_MIN;
        for(auto it:nums){
            freq[it]++;
            maxi=max(maxi,freq[it]);
        }
        vector<vector<int>>ans(maxi);
        for(int i=1;i<201;i++){
            int x=freq[i];
            while(x--){
                ans[x].push_back(i);
            }
        }
        return ans;
    }
};