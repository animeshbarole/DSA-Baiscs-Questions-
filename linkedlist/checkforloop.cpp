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

int isloop(struct Node *f)
{
    struct Node *p;
    struct Node *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;
        q = q!=NULL?q->next:NULL;
    } while (p&&q && p!=q);
     
     if(p==q)
     {
         return 0; //They are in loop

     }
     else 
     return 1;  //They are in not loop
    

}

void Display(struct Node *p)
{

  while(p!=0)
  {
      cout<<p->Data<<" ";
      p=p->next;
  }
}

int main()
{
    int A[]={1,2,3,4,5,6};
  
         
    creative(A,6);
      struct Node *t1,*t2;
    t1 = first->next->next;
    t2 = first->next->next->next->next->next;
    t2->next = t1;
    
    cout<<isloop(first);  
    
}