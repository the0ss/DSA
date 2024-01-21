class Solution {
public:
    int rob(vector<int>& nums) {
        int pre = 0, cur = 0;
        int n=nums.size();
        for (int i = 0; i <n; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
};