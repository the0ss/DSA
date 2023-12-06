//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string s;
        int n=S.length();
        int i,j;
        for(i=n-1,j=n-1;i>=0;i--){
            if(S[i]=='.'){
                s=s+S.substr(i+1,j-i);
                s=s+'.';
                j=i-1;
            }
        }
        if(i==j){
        	s+=S[0];
        	return s;
        }
        s+=S.substr(0,j+1);
        return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends