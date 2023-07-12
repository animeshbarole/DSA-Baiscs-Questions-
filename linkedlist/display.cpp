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

  while(p)
  {
      cout<<p->Data<<" ";
      p=p->next;
  }
}

int main()
{
    int A[]={1,2,3,4,5,6};
    creative(A,6);
    Display(first);
}