class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx=*max_element(begin(nums),end(nums)),curr=0;
        long long ans=0;
        int n=nums.size(),j=0;
        for(int i=0;i<n;i++){
            curr+=nums[i]==mx;
            while(curr>=k)
                curr-=nums[j++]==mx;
            ans+=j;
        }
        return ans;
    }
};