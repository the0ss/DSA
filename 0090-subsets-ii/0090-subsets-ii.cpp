class Solution {
private:
    void solve(int i,vector<int>curr,set<vector<int>>&ans,vector<int>nums){
        if(i==nums.size()){
            sort(curr.begin(),curr.end());
            ans.insert(curr);
            return;
        }
        solve(i+1,curr,ans,nums);
        curr.push_back(nums[i]);
        solve(i+1,curr,ans,nums);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        solve(0,{},ans,nums);
        vector<vector<int>>res;
        for(auto it:ans)
            res.push_back(it);
        return res;
    }
};