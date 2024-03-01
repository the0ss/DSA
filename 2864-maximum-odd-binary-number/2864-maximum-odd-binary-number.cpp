class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        int n=s.length();
        for(auto it:s)
            if(it=='1')
                ones++;
        string ans="";
        if(ones==1){
            sort(s.begin(),s.end());
            return s;
        }
        if(ones==n)
            return s;
        for(int i=0;i<ones-1;i++)
            ans+='1';
        for(int i=0;i<n-ones;i++)
            ans+='0';
        ans+='1';
        return ans;
    }
};