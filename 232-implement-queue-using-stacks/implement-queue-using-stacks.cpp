class MyQueue {
    stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    // considering push operations >> pop,top;
    void push(int x) {
        
        s1.push(x); //new element in s1
       
    }
    
    int pop() {
        if (!s2.empty()){
            int el=s2.top();
            s2.pop();
            return el;
        }
        else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int el=s2.top();
            s2.pop();
            return el;
        }
    }
    
    int peek() {
        if (!s2.empty()){
            return s2.top();
        }
        else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    
    bool empty() {
        return (s2.empty() && s1.empty());
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