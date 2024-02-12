class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1,n=nums.size();
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(cnt==0){
                cnt++;
                ans=nums[i];
            }
            else if(ans==nums[i])
                cnt++;
            else 
                cnt--;
        }
        return ans;
    }
};