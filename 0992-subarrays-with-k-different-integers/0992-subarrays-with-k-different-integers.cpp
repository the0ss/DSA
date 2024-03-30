class Solution {
    int solve(vector<int>&nums,int k){
        unordered_map<int,int>cnt;
        int i=0,ans=0;
        for(int j=0;j<nums.size();j++){
            if(!cnt[nums[j]]++) k--;
            while(k<0){
                if(!--cnt[nums[i]]) k++;
                i++;
            }
            ans+=j-i+1;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};