class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        int n=s.length();
        for(auto it:s)
            if(it=='1')
                ones++;
        int zeros=n-ones;
        return string(ones-1,'1')+string(zeros,'0')+'1';
    }
};