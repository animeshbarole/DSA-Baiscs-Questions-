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

int count(struct Node *e)  //Simple counting nodes 
{
    int c=0;
    while(e!=0)
    {
        c++;
        e=e->next;
    }
    return c;
}

int rcout(struct Node *r)  //Recursive count 
{
    if(r!=0)
    {
          return rcout(r->next)+1;
    }
    else
      return 0;
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
    int A[]={1,2,3,4,5,6};
    creative(A,6);
    Display(first);
    cout<<count(first)<<endl; //Counting number of nodes
    //Lets see recursive  function for the same thing 
    cout<<rcout(first)<<endl;
}