class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,prev=0;
        vector<int>v;
        for(auto it:bank){
            int one=0;
            for(auto i:it){
                if(i=='1')
                    one++;
            }
            if(one){
                ans+=one*prev;
                prev=one;
            }
        }
        return ans;
    }
};