#include<iostream>
#include<climits>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
}*first  =NULL;

void create(int arr[],int n)
{
   struct Node *last,*t;
   first = new Node;
   first->data = arr[0];
   first->next  =NULL;
   last = first;
     for(int i =1;i<n;i++)
     {
         t  =new Node;
         t->data = arr[i];
         t->next = NULL;
         last->next = t;
         last = t;
     }

}

void display(struct Node *p )

{ 
     while (p!=0)
     {
         cout<<p->data<<" ";
         p = p->next;
     }
     
    cout<<endl;
}

bool check(struct Node *p)
{
    int x = INT_MIN;
    
     while(p)
     {
          if(p->data<x)
             return false;
       
       
         x = p->data;
         p = p->next;

     }
    
    return true;
}


int main()
{
  int size  =5;
  int a[size] = {1,2,3,2,5};
  create(a,size);
  display(first);
  cout<<"Print zero for false or one for true "<<endl;
  cout<<check(first)<<endl;

}