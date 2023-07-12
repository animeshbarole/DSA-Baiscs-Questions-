#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
  
} *front = NULL,*rare = NULL ;

class Queue
{
   public:
   Queue(){}; //Deafult constructor;
    

  void enqueue(int x)
    {
        struct Node *t;
         t = new Node;
         if(t==NULL)   //If there is no space in the linkedlist means heap is full 
         {
             cout<<"Queus is full"<<endl;
         }
         else
         {
             t->data = x;
             t->next = NULL;
             if(front ==NULL) //when there is not node in the queue
             {
                 front =rare = t;
             }
             else
             {
                 rare->next = t;
                 rare =t;
             }
         }
    }

     void display()
     {
         struct Node *p = front;

         while(p)
         {
             cout<<p->data<<" ";
             p=p->next;
         }
         cout<<endl;
     }

     int dequeue() //Deleting the value in the Queue
     {
        int x = -1;
        struct Node *p;
        if(front==NULL)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else
        {
            p = front;
            front = front->next;
            x = p->data;
            delete p;
        }
        return x;
     }
};

int main()
{
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);

    
    Q.display();
    cout<<"This value is deleted from the queue"<<Q.dequeue()<<endl;
    cout<<"This value is deleted from the queue"<<Q.dequeue()<<endl;
    cout<<"This value is deleted from the queue"<<Q.dequeue()<<endl;
    cout<<"This value is deleted from the queue"<<Q.dequeue()<<endl;
    Q.display();

}