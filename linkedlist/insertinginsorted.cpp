#include<iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
}*first = NULL;

void create(int a[],int n) //arraya and size of the function 
{
    struct Node*t,*last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last  =first;
      for(int i =1;i<n;i++)
      {
          t = new Node;
          t->data  =a[i];
          t->next = NULL;
          last->next = t;
          last = t;
          
      }
}

//inserting in sorted list function

void insertsorted(struct Node *e,int key)
{
    struct Node *q,*t;
    e = first;
    q = NULL;
  
       t= new Node;
       t->data = key;  //Basically we are created the node first so that we can just change the nextpart fot pointing the node
                    //    by t.next = any.next;
       t->next = NULL;
   if(first == NULL)
   {
    
       first = t;  //Means it is first node and no other node is present 
   }
   else 
    {
       while(e && e->data<key)
       {
           q= e;           //If node is present
           e= e->next;
       }
      if(e == first)   //means the value is smaller than first node
      {
          t->next = first;
          first =t;
      }
      else
      {
          t->next = q->next;
          q->next = t;     //Value is in between or end of the node;



      }


   

   }
}


void diplay(struct Node *p)
{
    while(p!=0)
    {
       cout<<p->data<<" ";
       p  =p->next;
    }
    cout<<endl;
}

int main()
{
    int size = 5;
    int key = 80;
   int arr[size] ={10,20,30,50,70};
   create(arr,size);

   insertsorted(first,key);
      diplay(first); 
}