class MinStack {
public:
stack<int>stk;
stack<int>minstk;
    MinStack() {
        
    }
    
    void push(int val) {
     stk.push(val);
  int minVal;
if (minstk.empty()) {
    minVal = val;
} else {
    minVal = std::min(val, minstk.top());
}
minstk.push(minVal);   
    }
    
    void pop() {
        stk.pop();
        minstk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
     return minstk.top();
    }
};
