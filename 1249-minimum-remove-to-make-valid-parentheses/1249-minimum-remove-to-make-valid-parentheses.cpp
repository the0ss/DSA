class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        for(auto &it:s){
            if(it=='(')
                open++;
            else if(it==')')
                open--;
            if(open<0)
                it='*', open++;
        }
        int close=0;
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]=='(')
                close--;
            else if(s[i]==')')
                close++;
            if(close<0)
                s[i]='*',close++;
        }
        s.erase(remove(begin(s),end(s),'*'),end(s));
        return s;
    }
};