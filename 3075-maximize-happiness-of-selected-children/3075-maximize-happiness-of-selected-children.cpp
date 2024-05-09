class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        priority_queue<int>pq(happiness.begin(),happiness.end());
        int x=0;
        while(k--){
            auto value=pq.top();
            pq.pop();
            if(value-x>-1)
                ans+=value-x;
            x++;
        }
        return ans;
    }
};