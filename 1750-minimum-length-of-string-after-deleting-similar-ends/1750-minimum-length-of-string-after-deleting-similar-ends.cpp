class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int i=0,j=n-1;char ch;
        while(i<j&&s[i]==s[j]){
            ch=s[i];
            while(i<j&&s[i]==ch)
                i++;
            while(i<j&&s[j]==ch)
                j--;
        }
        if(ch==s[i])
            return 0;
        return j-i+1;
    }
};