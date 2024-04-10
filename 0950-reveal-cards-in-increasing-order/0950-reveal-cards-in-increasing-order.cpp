class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(rbegin(deck),rend(deck));
        int n=deck.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int last=-1;
            if(!ans.empty()){
                last=ans.back();
                ans.pop_back();
            }
            ans.insert(begin(ans),deck[i]);
            if(last!=-1){
                if(i==n-1){
                    ans.push_back(last);
                    break;
                }
                ans.insert(begin(ans),last);
            }
        }
        return ans;
    }
};
