class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            if(num[i]-'0'&1){
                if(i==0)
                    return num.substr(0,1);
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};