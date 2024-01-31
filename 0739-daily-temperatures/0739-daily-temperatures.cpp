class Solution {
public:
    stack<int>s;
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            while(!s.empty()&&temperatures[i]>temperatures[s.top()]){
                int ind=s.top();
                s.pop();
                ans[ind]=i-ind;
            }
            s.push(i);
        }
        return ans;
    }
};