class Solution {
    // static bool cmp(pair<int,int>a,pair<int,int>b){
    //     return a.first>b.first;
    // }
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int>m;
        for(auto it:arr){
            m[it]++;
        }
        vector<int>counting(n+1,0); // Using Counting Sort // TC : O(n)
        for(auto it:m){
            counting[it.second]++;
        }
        // sort(v.begin(),v.end(),cmp);
        int ans=0;
        int removed=0,half=n/2,freq=n;
        while(removed<half){
            ans++;
            while(counting[freq]==0) --freq;
            removed+=freq;
            --counting[freq];
        }
        return ans;
    }
};