class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(auto s:words){
            // int i=0,j=s.length()-1;
            // while(i<j&&s[i]==s[j]) i++,j--;
            // if(i>=j){
            //     ans=s;
            //     break;
            // }
            if(s==string(rbegin(s),rend(s))){
                ans=s;
                break;
            }
        }
        return ans;
    }
};