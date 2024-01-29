class MyQueue {
    stack<int>s;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        vector<int>v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        s.push(x);
        reverse(v.begin(),v.end());
        for(auto it:v)
            s.push(it);
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        int x=s.top();
        return x;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */