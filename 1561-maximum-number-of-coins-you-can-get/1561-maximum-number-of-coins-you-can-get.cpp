class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int i=0,j=n-2;
        int ans=0;
        while(i<j){
            ans+=piles[j];
            i++;
            j=j-2;
        }
        return ans;
    }
};