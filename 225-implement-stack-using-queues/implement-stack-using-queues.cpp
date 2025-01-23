class MyStack {
public:

 std::vector<int> stack;
    MyStack() {
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        int value = stack[stack.size() - 1];
        stack.pop_back();
        return value;
    }   
    
    int top() {
        return stack[stack.size() - 1];
    }
    
    bool empty() {
        if(stack.size() == 0)
            return true;

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