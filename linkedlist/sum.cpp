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

int sum(struct Node *e)
{
   int sum =0;
   while(e!=0)
   {
       sum = sum +e->Data; //adding data of current node 
       e=e->next; //going to next node
   }
   return sum;
}

int rsum(struct Node *r)
{
    if(r==0)
       return 0;
    else 
       return rsum(r->next)+r->Data;   

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
   cout<<sum(first)<<endl;
   cout<< rsum(first)<<endl;
}