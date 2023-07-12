#include<iostream>

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

void Display(struct Node *p)
{

  while(p!=0)
  {
      cout<<p->Data<<" ";
      p=p->next;
  }
  cout<<endl;
}

void reverseslid(struct Node *p)

{
    struct Node *q;
    struct Node *r;
    p = first;
    q = NULL;
    r = NULL;
    while(p!= 0)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r; // means address of q or link of q is pointing on r. that is reverse
    }
    first = q;
}

void reversetail(struct Node *q,struct Node *p)
{
    //struct Node *q;
  
    if(p !=0)
    {
        reversetail(p,p->next);
     
        p->next = q;
    }
    else
       first  =q;
      
    
}



int main()
{
    int A[]={1,2,3,4,5,6};
    creative(A,6);
  reverseslid(first);
   
   //reversetail(NULL,first);
     Display(first);
   
}