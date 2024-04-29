class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0;
        int xoor=0;
        for(auto it:nums)
            xoor^=it;
        if(xoor==k)
            return 0;
        bitset<32> x(xoor),y(k);
        string a=x.to_string();
        string b=y.to_string();
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
                ans++;
        }
        return ans;
    }
};