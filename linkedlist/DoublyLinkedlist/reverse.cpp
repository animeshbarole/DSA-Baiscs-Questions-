#include<iostream>
using namespace std;

struct Node
{
    struct Node*pre;
    int data;
    struct Node *next;
}*first = NULL;

class Doubly
{
   public:
   Doubly(int A[],int n)
   {
       struct Node *t,*last;
       first = new Node;
       first->pre=NULL;
       first->data =A[0];
       first->next = NULL;
       last = first;
         for(int i =1;i<n;i++)
         {
             t = new Node;
             //t->pre = NULL;
             t->data=A[i];
             t->next = last->next;
             t->pre = last;
             last->next = t;
             last = t;
         }
   }

  friend void display();
  
int lenght()
{
    int len = 0;
    struct Node*p = first;
    while(p)
    {
       len++;
       p = p->next;

    }
    return len;
}
  
   void insert(int index,int x)
   {
    
       struct Node *p = first;
       struct Node *t;
       if(index<0||index >lenght())
       {
           return ;
       }
       if(index==0)
       {
           t =new Node;
           t->data = x;
           t->pre=NULL;
           t->next =first;
           first->pre = t;
           first =t; 
       }
       else{
           
           for(int i = 0;i<index-1;i++)
           {
               p = p->next;
           }
           t = new Node;
           t->data =x;
           t->next = p->next;
           t->pre = p;
            if(p->next)
            p->next->pre = t;
            p->next = t;


       }
    

   }


   void reverse()
   {
       struct Node *temp;
       struct Node*p = first;
       while(p!=NULL)
       {
          temp = p->next;
          p->next=p->pre;
          p->pre = temp;
          p = p->next;  //For increasing the condition
          if(p!=NULL && p->next==NULL)
          {
               first = p;
          }
       }
   }
};

void display()
{
    struct Node*p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}


int main()
{
    int size = 5;
    int A[size] = {1,3,4,5,6};
    Doubly d(A,size);
    d.reverse();
    display();
  

}