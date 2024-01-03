class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        vector<int>v;
        for(auto it:bank){
            int one=0;
            for(auto i:it){
                if(i=='1')
                    one++;
            }
            if(one!=0)
                v.push_back(one);
        }
        if(v.size()==0)
            return 0;
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i]*v[i+1];
        }
        return ans;
    }
};