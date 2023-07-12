#include<iostream>
using namespace std;

struct Node 
{
  int data;
  struct Node *next;
} *first= NULL;


int count(struct Node *c)
{
    int co =0;
    while(c)
    {
       co++;
       c= c->next;
    }
    return co;
}

void create(int a[],int n)
{
    struct Node *t,*last;
    first =new Node;
    first->data = a[0];
    first->next =NULL;
    last = first;
      for(int i =1;i<n;i++)
      {
          t = new Node;
          t->data = a[i];
          t->next = NULL;
          last->next = t;
          last = t;
      }
}

void insert(struct Node *p,int index,int x)
{   
    
    if(index<0||index>count(p))
       return;

    struct Node *t;
    t= new Node;
    t->data = x;
    if(index ==0)
    {
    t->next  = first; //This is point to NULL
    first = t;
    }
    else
    {
        p =first;
        for(int i =0;i<index-1;i++)
        {
            p = p->next;
        }
         t->next = p->next;
            p->next = t;
       
    }
   

    


}

void display(struct Node *p)
{ 
   while(p)
   {
       cout<<p->data<<" ";
       p = p->next;
   }
  cout<<endl;
}


int main()
{
  int n = 6;
  int arr[n] = {1,2,3,4,5,6} ;
 // create(arr,n);

  insert(first,0,10);
  insert(first,1,20);
  insert(first,2,30);
  insert(first,3,40);
  display(first);
    cout<<"total Number of nodes in the array"<<endl;
 cout<<count(first)<<endl;
 
 
} 