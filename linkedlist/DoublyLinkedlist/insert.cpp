
#include<iostream>
using namespace std;

struct Node
{
    struct Node*pre;
    int data;
    struct Node *next;
}*first = NULL;

class Doubly
{
   public:
   Doubly(int A[],int n)
   {
       struct Node *t,*last;
       first = new Node;
       first->pre=NULL;
       first->data =A[0];
       first->next = NULL;
       last = first;
         for(int i =1;i<n;i++)
         {
             t = new Node;
             t->pre = NULL;
             t->data=A[i];
             t->next = last->next;
             t->pre = last;
             last->next = t;
             last = t;
         }
   }

  friend void display();
  friend int lenght();
};

void display()
{
    struct Node*p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int lenght()
{
    int len = 0;
    struct Node*p = first;
    while(p)
    {
       len++;
       p = p->next;

    }
    return len;
}

int main()
{
    int size = 5;
    int A[size] = {1,3,4,5,6};
    Doubly d(A,size);
    display();
   cout<< lenght()<<endl;

}