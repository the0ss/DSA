class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int w=0,x=1,y=n-2,z=n-1;
        // while(nums[w]==nums[x]&&x<n)x++;
        // while(nums[y]==nums[z]&&y>0)y--;
        return (nums[y]*nums[z])-(nums[w]*nums[x]);
    }
};