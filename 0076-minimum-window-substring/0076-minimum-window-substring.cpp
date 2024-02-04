class Solution {
public:
    string minWindow(string s, string t) {
        int i=0,j=0,minlen=INT_MAX,cnt=0;
        string res="";
        unordered_map<char,int>m;
        for(auto it:t) m[it]++,cnt++;
        while(j<s.size()){
            if(m[s[j++]]-->0) cnt--;
            if(cnt==0){
                while(m[s[i]]<0)m[s[i++]]++;
                int len=j-i;
                if(len<minlen){
                    minlen=len;
                    res=s.substr(i,len);
                }
                m[s[i++]]++;
                cnt++;
            }
        }
        return res;
    }
};