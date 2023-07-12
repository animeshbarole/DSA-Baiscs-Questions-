#include<iostream>
using namespace std;


struct Node {

      int Data;
      struct Node *next;  
 
  
}*first = NULL;


void create(int A[],int n)
{
    struct Node *t,*last;
    first= new Node;
    first->Data = A[0];
    first->next =NULL;
    last = first;

    for(int i =1;i<n;i++)
    {
        t = new Node;
        t->Data = A[i];
        t->next = NULL;
        last->next = t;
        last =t;
    }
}

void Display(struct Node *p)
{
    while (p)
    {
        cout<<p->Data<<" ";
        p = p->next;
    }
    
}

int main()
{
     int A[5] = {1,2,3,4,5};
     create(A,5);
     Display(first);
     
}