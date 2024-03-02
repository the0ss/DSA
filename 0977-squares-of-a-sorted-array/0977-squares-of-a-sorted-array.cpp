class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        vector<int>ans(n);
        for(int x=n-1;x>-1;x--){
            if(abs(nums[i])>=abs(nums[j])){
                ans[x]=nums[i]*nums[i];
                i++;
            }
            else{
                ans[x]=nums[j]*nums[j];
                j--;
            }
        }
        return ans;
    }
};