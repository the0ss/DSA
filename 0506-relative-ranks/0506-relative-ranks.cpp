class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>ans(n);
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        int x=0;
        while(!pq.empty()){
            auto value=pq.top().first;
            auto place=pq.top().second;
            pq.pop();
            if(x==0)
                ans[place]="Gold Medal";
            else if(x==1)
                ans[place]="Silver Medal";
            else if(x==2)
                ans[place]="Bronze Medal";
            else
                ans[place]=to_string(x+1);
            x++;
        }
        return ans;
    }
};