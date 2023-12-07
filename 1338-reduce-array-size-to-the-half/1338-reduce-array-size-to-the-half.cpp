class Solution {
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.first>b.first;
    }
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int>m;
        for(auto it:arr){
            m[it]++;
        }
        vector<pair<int,int>>v;
        for(auto it:m){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),cmp);
        int ans=0;
        int sum=0;
        for(auto it:v){
            sum+=it.first;
            ans++;
            if(sum>=n/2)
                break;
        }
        return ans;
    }
};