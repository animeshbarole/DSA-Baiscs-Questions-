#include<iostream>
using namespace std;


class queue
{
private: 
   int size;
   int front;
   int rare;
   int *Q;

  public:
   queue()  //Default constructor
   { 
     size = 10;
     front = 0;
     rare = 0;
     Q = new int[size];
   }
   queue(int s)
   {
       size = s;
       front =0;
       rare =0;
       Q = new int[size];
   }

   void enqueue(int x);
   int dequeue();
   void display();

};
void queue::enqueue(int x)
{
      if((rare+1)%size==front)
      {
          cout<<"Queue is full"<<endl;
      }
      else{
          
          rare = (rare+1)%size;
          Q[rare] = x;
      }

}

int queue::dequeue()
{
    int x =-1;
    if(rare ==front)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        front = (front+1)%size;
        x = Q[front];
    }
    return x;
}

//Understand the display operation it is very important

void queue::display()
{
  int i = front+1;
  do
  {
      /* code */
      cout<<Q[i]<<" ";
      i = (i+1)%size;

  } while(i!=(rare+1)%size);
  
}

int main()
{
   queue q(7);
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   q.enqueue(6);
   q.display();
   cout<<"Elemnt which is deletd  "<<q.dequeue()<<endl;
   q.display();


}