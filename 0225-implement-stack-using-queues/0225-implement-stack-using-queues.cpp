class MyStack {
public:
    queue<int>q;
    int size =0;
    MyStack() {
        
    }
    
    void push(int x) {
        
       q.push(x);
        for(int i=0; i<size; i++)
        {
            int val = q.front();
            q.push(val);
            q.pop();
        }
        size++;
    }
    
    int pop() {
        int val =  q.front();
        size--;
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
     return (q.empty());   
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */