class Solution {
public:
    int minSwaps(string s) {
        int stack=0;
        int end=s.length()-1;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[')
                stack++;
            else if(stack)
                stack--;
            else{
                ans++;
                while(s[end]!='['){
                    end--;
                }
                end--;
                stack++;
            }
                
        }
        return ans;
    }
};