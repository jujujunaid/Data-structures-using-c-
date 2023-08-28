class MyStack {
public:
queue<int>q1;
    MyStack() {  
    }
    
    void push(int x) {
        q1.push(x);
        for(int i=0;i<q1.size()-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int n=q1.front();
        q1.pop();
        return n;
    }
    
    int top() {
       return  q1.front(); 
    }
    
    bool empty() {
        return q1.empty() ;
    }
};