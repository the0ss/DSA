class Solution {
public:
    int minSwaps(string s) {
        int ans=0;
        int extraClose=0;
        for(auto it:s){
            if(it=='[')
                extraClose--;
            else
                extraClose++;
            ans=max(ans,extraClose);
        }
        return (ans+1)/2;
    }
};