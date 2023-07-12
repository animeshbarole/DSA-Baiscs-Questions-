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
}

void deletduplicate(struct Node *p)
{
    struct Node *q;
     q = p->next;
    int count;
     while(q!=0) //q is on the next node so thats why it will be first that is going to end with
  {
      if(p->Data !=q->Data)
      {
          p = q;
          q = q->next;
      }
      
      p->next = q->next;
      count = q->Data;
      cout<<count<<endl;
      delete q;
      q = p->next;
   

  }

}

int main()
{
    int A[]={1,2,2,4,4,4};
    creative(A,6);
    deletduplicate(first);
    Display(first);
}

