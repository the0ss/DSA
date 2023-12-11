class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        int curr=-1;
        for(auto it:arr){
            if(curr==-1){
                curr=it;
                cnt++;
            }
            else if(it!=curr){
                curr=it;
                cnt=1;
            }
            else
                cnt++;
            if(cnt>n/4)
                return curr;
        }
        return -1;
    }
};