class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=neededTime.size();
        int sum=neededTime[0];
        int maxi=neededTime[0];
        char curr=colors[0];
        int ans=0;
        for(int i=1;i<n;i++){
            if(curr==colors[i]){
                sum+=neededTime[i];
                maxi=max(maxi,neededTime[i]);
            }
            else{
                ans+=(sum-maxi);
                maxi=neededTime[i];
                sum=neededTime[i];
                curr=colors[i];
            }
            if(i==n-1)
                ans+=(sum-maxi);
        }
        return ans;
    }
};