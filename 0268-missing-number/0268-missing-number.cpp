class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int exp=0;
        for(auto it:nums){
            if(it!=exp)
                return exp;
            exp++;
        }
        return n;
    }
};