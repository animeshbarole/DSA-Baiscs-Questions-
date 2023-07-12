#include<iostream>
using namespace std;


class Node
{
    public:
   int data;
   Node *next;
};

class Linkedlist
{
   private:
   Node *Head;
  public:
   Linkedlist()
   {
       Head = NULL;
   }
   

   Linkedlist(int A[],int n);
  // ~Linkedlist();

   void display();

   
};

Linkedlist::Linkedlist(int A[],int n)
{
    Node *t,*last;
    Head = new Node;
    Head->data=A[0];
    Head->next = Head;
    last =Head;
      for(int i = 1;i<n;i++)
      {
          t = new Node;
          t->data = A[i];
          t->next = last->next;
          last->next = t;
          last = t;
      } 

}

//Linkedlist::~Linkedlist()
//{
//    Node *p = Head;
//    do{
//          Head = Head->next;
//          delete p;
//          p =Head;
//    }while(p!=Head);
//}

void Linkedlist::display()
{
    Node *f = Head;
    do
    {
        cout<<f->data<<" ";
        f = f->next;
    } while (f!=Head);
    
}








int main()
{
   int size =5;
   int A[size] = {1,2,4,5,6};
   Linkedlist l(A,size);
   l.display();
  
}