#include<iostream>
using namespace std;

struct Node
{

   struct Node *pre;
   int data;
   struct Node *next;

}*first  = NULL;

class doubly
{
    public:
    doubly(int A[],int n)
    {
        struct Node *t,*last;
        first = new Node;
        first->data = A[0];
        first->pre=  NULL;
        first->next = NULL;
        last = first;
           for(int i = 1;i<n;i++)
           {
               t =new Node;
               t->data=A[i];
               t->pre = last;
               t->next = last->next;
               last->next  =t;
               last = t;
           }
    }

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
    void display()
    {
        struct Node*p =  first;
        while(p)
        {
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }

    int deelete(int index)
    {
         struct Node *p =first;
        int x = -1;
       
        if(index<1||index>lenght())
        {
            return -1;
        }
        if(index==1)
        {
            first = first->next;
            if(first)
            first->pre = NULL;
            x = p->data;
            delete p;
        }
        else
        {
            for(int i = 0;i<index-1;i++)
            {
                p = p->next;
            }
            p->pre->next=p->next;
            if(p->next)
            p->next->pre = p->pre;

            x= p->data;
            delete p ;
        }
        return x;

    }

};

int main()
{
   int size = 5;
   int A[size]={1,2,3,4,5};
   doubly d(A,size);
   d.deelete(4);
   d.display();
   

}