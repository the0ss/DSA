class Solution {
public:
    string getPermutation(int n, int k) {
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=i+1;
        string res="";
        while(--k){
            int i,j;
            for(i=n-2;i>=0;i--)
                if(a[i]<a[i+1])
                    break;
            if(i<0)
                reverse(a,a+n);
            else{
                for(j=n-1;j>=0;j--)
                    if(a[j]>a[i])
                        break;
                swap(a[i],a[j]);
                reverse(a+i+1,a+n);
            }
        }
        for(int i=0;i<n;i++)
            res.push_back(a[i]+'0');
        return res;
    }
};