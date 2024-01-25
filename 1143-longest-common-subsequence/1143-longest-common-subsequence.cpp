class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length(),n=text2.length();
        int table[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                    table[i][j]=0;
                else if(text1[i-1]==text2[j-1])
                    table[i][j]=table[i-1][j-1]+1;
                else
                    table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
        return table[m][n];
    }
};