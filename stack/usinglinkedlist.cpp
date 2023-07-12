#include<iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
} *top=NULL;

class stack
{
     public:
    stack()  //Defalut construtor
    {
           
    }
    void push(int x) //Entering the element in the stack
    {
        struct Node *t =new Node;
        if(t==NULL)
        {
            cout<<"Stack is FULl"<<endl;
        }
        else
        {
             t->data = x; //Entering the value 
             t->next = top; //For inserting in stack we have to point new node pointer to the top
             top = t;  //Point top at t means new Node is become top
        }
    }
    void display();
    int pop()
    {
        int x =-1;
        struct Node *p;
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            
            x = top->data;
            p =top;
            top = top->next;
            delete p;

        }
       return x;
    }
    int peek(int pos)
    {
        
        struct Node *p=top;
      
            for(int i = 0;p!=NULL&&i<pos-1;i++)
            {
                p = p->next;
            }
            if(p!=NULL)
            {
                return p->data;
            }
            else
             return -1;

        
    }
};
void stack::display()
{
    struct Node *p = top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p =p->next;
    }
    cout<<endl;
}

int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
   // cout<<"Elemnt is deleted is"<<st.pop()<<endl;
   cout<<"value at this position"<< st.peek(1);
    st.display();

}