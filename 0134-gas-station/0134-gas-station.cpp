class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tank=gas[n-1]-cost[n-1];
        int max=tank;
        int ans=n-1;
        for(int i=n-2;i>=0;i--){
            max+=gas[i]-cost[i];
            if(max>tank){
                tank=max;
                ans=i;
            }
        }
        return max>=0?ans:-1;
    }
};