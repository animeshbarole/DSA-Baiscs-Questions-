#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *Next;
} *first = NULL;


int count ()
{
    struct Node *p =first;
    int co = 0;
    while(p)
    {
        co++;
        //cout<<p->data<<" ";
        p = p->Next;
    }
    return co;
}
void Create(int arr[],int n)
{
    struct Node *t,*last;
    first = new Node;
    first->data = arr[0];
    first->Next = NULL;
    last = first;

    for(int i = 1;i<n;i++)
    {
        t = new Node;
        t->data = arr[i];
        t->Next = NULL;
        last->Next  = t;
        last = t;
    }
}

void insert(int key)
{
    struct Node *t,*p,*q;
    p  =first;
    q = NULL;
    t  = new Node;
    t ->data = key;
    t->Next =  NULL;
     
    if(first==NULL)
    {
        first = t;
       
    } 
    else 
    {
        while(p&&p->data<key)
        {
            q = p;
            p = p->Next;

        }
        if(p==first)
        {
            t->Next = first;
            first = t;
        }
        else 
        {
            t->Next = q->Next;
            q->Next = t;
        }


    }
    
  
}

void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p->Next;
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,2,3,6,8};
    Create(arr,5);
    cout<<count();
    insert(5);
    display(first);
cout<<count();
    
}