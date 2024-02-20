class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // sort(begin(nums),end(nums));
        // int exp=0;
        // for(auto it:nums){
        //     if(it!=exp)
        //         return exp;
        //     exp++;
        // }
        // return n;
        int xr=0,i=0;
        for(;i<n;i++){
            xr=xr^i^nums[i];
        }
        return xr^i;
    }
};