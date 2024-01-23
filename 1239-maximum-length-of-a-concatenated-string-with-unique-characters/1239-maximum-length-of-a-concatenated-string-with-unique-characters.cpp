class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<bitset<26>>mask ={bitset<26>()};
        int ans=0;
        for(auto s:arr){
            bitset<26>a;
            for(auto c:s)
                a.set(c-'a');
            int n=a.count();
            if(n<s.size()) continue;
            
            for(int i=mask.size()-1;i>-1;i--){
                bitset c=mask[i];
                if((c&a).any()) continue;
                mask.push_back(c|a);
                ans=max(ans,(int)c.count()+n);
            }
        }
        return ans;
    }
};