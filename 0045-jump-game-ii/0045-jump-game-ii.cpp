class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        int ans=1;
        int limit=nums[0];
        int maxReachable=0;
        for(int i=1;i<n;i++){
            if(i>limit){
                ans++;
                limit=maxReachable;
            }
            maxReachable=max(maxReachable,i+nums[i]);
        }
        
        return ans;
    }
};