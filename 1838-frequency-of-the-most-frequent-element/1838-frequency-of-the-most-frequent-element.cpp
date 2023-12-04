class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long currsum=0;
        int ans=0;
        for(int r=0,l=0;r<nums.size();r++){
            long target=nums[r];
            currsum+=nums[r];
            long window_sum=(r-l+1)*target;
            long ops=window_sum-currsum;
            while(ops>k){
                 currsum-=nums[l++];
                ops=(r-l+1)*target-currsum;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};