class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        int l=0;
        int r=min(k,n);
        while(l<n){
            reverse(s.begin()+l,s.begin()+r);
            l+=2*k;
            r=min(l+k,n);
        }
        return s;
    }
};