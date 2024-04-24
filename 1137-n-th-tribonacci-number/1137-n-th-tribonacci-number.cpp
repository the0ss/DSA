class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        int a=0,b=1,c=1,d;
        for(int i=1;i<n-1;i++){
            d=c;
            c=a+b+c;
            a=b;
            b=d;
        }
        return c;
    }
};