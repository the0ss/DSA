class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // vector<long long>prefix(nums.begin(),nums.end());
        int n=nums.size();
        // for(int i=1;i<n;i++)
        //     prefix[i]+=prefix[i-1];
        // for(int i=n-1;i>1;i--){
        //     if(prefix[i]-prefix[i-1]<prefix[i-1])
        //         return prefix[i];
        // }
        // return -1;
        long long ans=-1;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<sum) ans=nums[i]+sum;
            sum+=nums[i];
        }
        return ans;
    }
};

// 1 1 2 3  5 12 50
// 1 2 4 7 12 24 74    