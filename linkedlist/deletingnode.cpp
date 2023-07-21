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

int deleting(int x)
{
   struct Node *p,*q;
   int y= -1;  //it is used for to stroing the values 

   if(x==1)
   {
       y = first->Data;
       p = first;
       first = first->next;
       delete p;
   }
   else 
   {
      p = first;
      q = NULL;
      for(int  i =0;i<x -1&&p;i++)
      {
          q=p;
          p = p->next;
      }
      if(p)
      {
          q->next = p->next;
          y = p->Data;
          delete p ;
      }
  }
  return y;

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
    int A[]={1,2,3,44,5,6};
    creative(A,6);
    cout<<"Value at the node is "<<endl;
    cout<<deleting(4)<<endl;
    Display(first);
}


