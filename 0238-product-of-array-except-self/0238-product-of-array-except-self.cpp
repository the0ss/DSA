class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int cnt=0,ind=-1;
        for(auto it:nums)
            if(it!=0)
                product*=it;
            else{
                cnt++;
            }
        if(cnt>1){
            vector<int>answer(nums.size(),0);
            return answer;
        }
        vector<int>ans;
        if(cnt){
            for(auto it:nums){
                if(it==0){
                    ans.push_back(product);
                    continue;
                }
                ans.push_back(0);
            }
            return ans;
        }
        for(auto it:nums){
            ans.push_back(product/it);
        }
        return ans;
    }
};