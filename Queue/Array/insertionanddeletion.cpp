#include<iostream>
using namespace std;

class Queue
{
   private: 
   int size;
   int front;
   int rear;
   int *Q;  //We want to create the size of array dynamically 
   public:
   
    Queue()
    {
        size = 10;
        front =-1;
        rear =-1;
        Q = new int[size];
    }

     Queue(int s)
     {
           size = s;
           front =-1;
           rear =-1;
           Q = new int[s];
     }

     void enqueue(int x)
     {
         if(rear==size-1)
         {
             cout<<"Queue is full"<<endl;
         }
         else
         {
               rear++;
               Q[rear]=x;
         }
     }

     int dequeue()
     {
         int x =-1; //Intialising the value of x =-1;
         if(front ==rear)
         {
             cout<<"Stack is Empty"<<endl;
         }
         else
         {
               x = Q[front+1];
             front++;
           
         }
         return x;
     }

     void display()
     {
         for(int i = front+1;i<=rear;i++)
         {
             cout<<Q[i];
         }
         cout<<endl;
     }
     
};



int main()
{
    int si;
    int y;
    cout<<"Enter the size of the queue"<<endl;
    cin>>si;
  
     Queue Q(si);
     Q.enqueue(1);
     Q.enqueue(2);
     Q.enqueue(3);
     Q.display();
     cout<<"The value which is deque is "<<Q.dequeue()<<endl;
     Q.display();
     
}