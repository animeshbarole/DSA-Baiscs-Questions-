#include<iostream>

using namespace std;

struct Node
{
   int Data;
   struct Node *next; //It is storing address part thats why pointer
   //Struct node of the next node ;

} *first = NULL,*Second = NULL,*Third = NULL; //Creating  Two Pointer for the merging the linked list

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

void creative2(int B[],int n)
{ 
    struct Node *t,*last; //T and last two pointers
    Second = new Node; //Creating 1 st node 
    Second->Data=B[0];
    Second->next=NULL;
    last=Second;

    for(int i = 1;i<n;i++)
    {
        t = new Node;
        t->Data=B[i];
        t->next=NULL;
        last->next=t;
        last= t;
    }


}

//void concate(struct Node *p,struct Node *q)
//{
//    Third = p;
//    while(p->next!=NULL)
//    {
//       p = p->next;
//    }   
//    p->next = q;
//
//}


void mix(struct Node *p,struct Node *q)
{
   struct Node *last; 

   if(p->Data<q->Data)
   {
      Third = last =p;
      p = p->next;
      last->next = NULL; 
   }
   else
   {
     Third = last =q;
      q  = q->next;
      last->next = NULL; 

   }
   while(p && q)
   {  
      if(p->Data<q->Data)
      {
          last->next = p;
          last = p;
          p = p->next;
          last->next = NULL; 
      }
      else
      {
          last->next = q;
          last = q;
          q= q->next;
          last->next = NULL; 
      }

   }
   if(p){
   last->next = p;
   p = p->next;
   }
   if(q){
   last->next = q;
   q = q->next;
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

int main()
{
    int A[]={10,20,40,50,60};
    int B[] ={15,18,25,30,55};
    
    cout<<"First Linked List"<<endl;
    creative(A,5);
    Display(first);

    cout<<"Second Linked list"<<endl;
    creative2(B,5);
    Display(Second);

    cout<<"merge"<<endl;
    mix(first,Second);
    Display(Third);


   // cout<<"Merging Two Arrays"<<endl;
  
    
  
}