class Solution {
public:
    bool checkValidString(string s) {
        int l=0,r=0;
        for(auto it:s){
            l+=it=='('?1:-1;
            r+=it!=')'?1:-1;
            if(r<0) break;
            l=max(l,0);
        }
        return l==0;
    }
};