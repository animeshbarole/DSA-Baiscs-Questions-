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

int maximum(struct Node *q)
{
    int m = INT_MIN;
    while(q)
    { 
         if(q->Data>m)
         {
             m = q->Data;
               
         }
        q=q->next;  
    }
    return m; 
}

int rmaximum(struct Node *r)
{
    //Intialising value in which we can store next node ;
    int x ;
   if(r==0)
      return INT_MIN;
   x = rmaximum(r->next);
   return x>r->Data?x:r->Data;


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
    int A[]={1,5,2,4,1,10};
    creative(A,6);
    Display(first);
    cout<<maximum(first)<<endl;
    cout<<rmaximum(first);
}