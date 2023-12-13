class KthLargest {
    priority_queue<int,vector<int>,greater<int>>num;
    int p;
public:
    KthLargest(int k, vector<int>& nums) {
        p=k;
        for(auto it:nums){
            num.push(it);
            if(num.size()>p)
                num.pop();
        }
    }
    
    int add(int val) {
        num.push(val);
        if(num.size()>p)
            num.pop();
        return num.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */