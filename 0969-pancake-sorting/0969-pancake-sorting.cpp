class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>ans;
        int i;
        for(int x=arr.size();x>0;x--){
            for(i=0;arr[i]!=x;i++);
            reverse(arr.begin(),arr.begin()+i+1);
            ans.push_back(i+1);
            reverse(arr.begin(),arr.begin()+x);
            ans.push_back(x);
        }
        return ans;
    }
};