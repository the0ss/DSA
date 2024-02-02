class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        queue<int>q;
        for(int i=1;i<=9;i++)
            q.push(i);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            if(node>high&&node<low)
                break;
            else if(node<=high&&node>=low)
                ans.push_back(node);
            auto last=node%10;
            if(last<9) q.push(node*10+last+1);
        }
        return ans;
    }
};