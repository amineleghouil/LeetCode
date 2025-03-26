class MinStack {
public:
    stack<int> stk;  
    stack<int> minS;

    MinStack() { 
    }
    
    void push(int val) {
        stk.push(val);
        if (!minS.empty()) minS.push(min(minS.top(), val));
        else minS.push(val);
    }
    
    void pop() {
        stk.pop();
        minS.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minS.top(); 
    }
};
