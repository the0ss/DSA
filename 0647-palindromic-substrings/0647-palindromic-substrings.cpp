class Solution {
    int solve(string s,int left,int right){
        int n=s.length();
        int cnt=0;
        while(left>=0&&right<n&&s[left]==s[right]){
            cnt++;
            left--;
            right++;
        }
        return cnt;
    }
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            count+=solve(s,i,i);
            count+=solve(s,i,i+1);
        }
        return count;
    }
};