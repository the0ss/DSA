class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<float,pair<int,int>>>pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
                pq.push({-(float)arr[i]/arr[j],{arr[i],arr[j]}});
        }
        k--;
        while(k--)
            pq.pop();
        return {pq.top().second.first,pq.top().second.second};
    }
};