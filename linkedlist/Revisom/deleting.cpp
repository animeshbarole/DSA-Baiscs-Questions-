#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *Next;
} *first = NULL;

void Create(int arr[],int n )
{
    struct Node *t,*last;
    first = new Node;
    first->data = arr[0];
    first->Next = NULL;
    last = first;

    for(int i = 1;i<n;i++)
    {
        t = new Node;
        t->data = arr[i];
        t->Next = NULL;
        last->Next = t;
        last = t;        
    }
}

int Delete(int pos)
{
   struct Node *p,*q;
   int x = -1;
   if(pos==1)
   {
      p = first;
      first = first->Next;
      x = first->data;
      delete p;
   }
   else 
   {
      p = first;
      q = NULL;
      for(int i = 0;i<pos-1;i++)
      {
        q =p;
        p = p->Next;
      }
      if(p)
      {
      q->Next = p->Next;
      x = p->data;
      delete p ;
      } 
   }
   return x;
}

void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p->Next;
    }
    cout<<endl;
}

int main()
{
   int a[5] ={1,23,4,56,6};
   Create(a,5);
   cout<<"The Value which is deleted is "<<Delete(3)<<endl;
   display(first);
}