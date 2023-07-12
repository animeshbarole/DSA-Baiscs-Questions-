#include<iostream>
using namespace std;


struct Node
{
   int data;
   struct Node *next;
  
} *first = NULL;

void creative(int a[],int n)
{
    struct Node *t,*last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
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

int display(struct Node *p)
{
    int sum =0;
    int count =0;
    while(p!=0)
    {
        
     
          count++;
        sum  = sum +p->data;
           p = p->next;

       
      
    }
    return count,sum;
}


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,8,9};
    creative(arr,10);
    cout<<display(first);
}