class MyStack {
public:
    int st,en;
    int arr[101];
    
    MyStack() {
        st = 0;
        en =-1;
    }
    
    void push(int x) {
      arr[++en] = x;
    }
    
    int pop() {
        return arr[en--];
    }
    
    int top() {
        return arr[en];
    }
    
    bool empty() {
        if(en == -1)
        {
            return true;
        }
         return false;
        
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