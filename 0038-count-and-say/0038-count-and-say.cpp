class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        while(--n){
            string temp;
            int cnt=0;
            char s=ans[0];
            for(auto it:ans){
                if(s==it){
                    cnt++;
                }
                else{
                    temp+=to_string(cnt);
                    temp+=s;
                    cnt=1;
                    s=it;
                }
            }
            if(cnt>0){
                temp+=to_string(cnt);
                temp+=s;
            }
            ans=temp;
        }
        return ans;
    }
};