class Solution {
public:
    void solve(int n,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(n==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[n]<=target){
            ds.push_back(arr[n]);
            solve(n,target-arr[n],arr,ans,ds);
            ds.pop_back();
        }
        solve(n+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,target,candidates,ans,ds);
        return ans;
    }
};