class Solution {
public:
    int maxDepth(string s) {
        int ans=0,cnt=0;
        // stack<char>st;
        // for(auto it:s){
        //     if(it==')'&&st.top()=='('){
        //         st.pop();
        //         cnt--;
        //     }
        //     else if(it=='('){
        //         st.push('(');
        //         cnt++;
        //     }
        //     ans=max(ans,cnt);
        // }
        
        for(auto it:s){
            if(it=='(')
                ans=max(ans,++cnt);
            if(it==')')
                cnt--;
        }
        return ans;
    }
};