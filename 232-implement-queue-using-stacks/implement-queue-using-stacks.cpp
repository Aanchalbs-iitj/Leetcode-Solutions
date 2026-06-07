class MyQueue {
    stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    // considering push operations are less
    void push(int x) {
        while(!s1.empty()){//jo bhi elements hai s1 mein unko s2 mein bhejo
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x); //new element in s1
        while(!s2.empty()){// s2 to s1
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int el=s1.top();
        s1.pop();
        return el;
    }
    
    int peek() {
        return s1.top();
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