class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(begin(tokens),end(tokens));
        int ans=0, score=0,i=0,j=tokens.size()-1;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i++];
                ans=max(ans,++score);
            }
            else if(score>0){
                score--;
                power+=tokens[j--];
            }
            else
                break;
        }
        return ans;
    }
};