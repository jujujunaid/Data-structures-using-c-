class MyQueue {
public:
   struct myQueue
    {
        int val;
       myQueue *next;
    };
    myQueue *l = NULL, *head = NULL; 
    void push(int x)
    {
        if(head==NULL)
        {
            head = new myQueue();
            head->val=x;
            head->next=NULL;
            l=head;
        }
        else
        {
            myQueue *p = new myQueue();
            p->val=x;
            p->next=NULL;
            l->next=p;
            l=p;
        }
    }
    
    int pop()
    {
        myQueue *p = head;
        head = head->next;
        int a = p->val;
        delete(p);
        if(head==NULL)
            l=NULL;
        return a;
    }
    
    int peek()
    {
        return head->val;
    }
    
    bool empty()
    {
        return (head==NULL);
    }
};
