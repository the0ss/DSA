class Solution {
public:
    int evalRPN(vector<string>& token) {
        string x=token.back();
        token.pop_back();
        if(x!="+"&&x!="*"&&x!="-"&&x!="/")
            return stoi(x);
        long b=evalRPN(token);
        long a=evalRPN(token);
        if(x=="+") return a+b;
        else if(x=="-")return a-b;
        else if(x=="*")return a*b;
        else return a/b;
    }
};