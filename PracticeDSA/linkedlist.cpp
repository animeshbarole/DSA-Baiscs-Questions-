#include <bits/stdc++.h>

using namespace std;

struct Node
{
   int Data;
   struct Node *next; //It is storing address part thats why pointer
   //Struct node of the next node ;

} *first = NULL;//Not have address yet

void creative(int A[],int n)
{ 
    struct Node *t,*last; //T and last two pointers
    first = new Node; //Creating 1 st node 
    first->Data=A[0];
    first->next=NULL;
    last=first;

    for(int i = 1;i<n;i++)
    {
        t = new Node;
        t->Data=A[i];
        t->next=NULL;
        last->next=t;
        last= t;
    }


}

void create(int pos,int val)
{
    Node *t,*p;

    if(pos==0)
    {
        t = new Node;
        t->Data = val;
        t->next = first;
        first =t;
    }

    else if(pos>0)
    {
         p = first;

         for(int i = 0;i<pos-1;i++)
         {
             p=p->next;
         }
         t = new Node;
         t->Data = val;
         t->next = p->next;
         p->next = t;
    }

}

int count(Node *p)
{
 //   Node *p = first;
     int c = 0;
    while(p!=NULL)
    {
        c++;
        p  = p->next;
    }
    return c;
}



void Display(struct Node *p)
{

  while(p!=0)
  {
      cout<<p->Data<<" ";
      p=p->next;
  }
  cout<<endl;
}

int main()
{
   // int A[]={1,4,3,2,5,6};
    create(0,10);
    create(1,20);
    create(2,30);
    create(3,40);
    create(4,50);
    Display(first);
   cout<< count(first);
}