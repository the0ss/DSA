class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        // string a="",b="";
        // int p=0;
        // for(int i=0;i<n;i++){
        //     a+=to_string(p);
        //     b+=to_string(!p);
        //     p=!p;
        // }
        // int x=0,y=0;
        // for(int i=0;i<n;i++){
        //     if(a[i]!=s[i])
        //         x++;
        //     if(b[i]!=s[i])
        //         y++;
        // }
        // return x<y?x:y;
        int ans=0;
        for(int i=0;i<n;i++)
            if(s[i]-'0'!=i%2)
                ans++;
        return min(ans,n-ans);
    }
};