//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        if(M>N) return -1;
        int totalSun=S/7;
        int totalDays=S-totalSun;
        int totalFood=S*M;
        int ans=0;
        if(totalFood%N)
            ans=totalFood/N+1;
        else
            ans=totalFood/N;
        if(ans>totalDays)
            return -1;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends