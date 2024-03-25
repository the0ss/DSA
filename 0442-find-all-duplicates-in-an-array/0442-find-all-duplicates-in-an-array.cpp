class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int it:nums){
            it=abs(it);
            if(nums[it-1]<0)
                ans.push_back(abs(it));
            nums[it-1]=-nums[it-1];
        }
        return ans;
    }
};