#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *Next;
} *first = NULL;

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

struct Node *Search(int key)
{
    struct Node *p = first;

    while(p)
    {
        if(p->data==key)
        {
            return p;
        }
        p = p->Next;
    }
    return NULL;
}

struct Node *uplinear(int key)
{
    struct Node * q = NULL;
    struct Node * p = first;
    
    while(p)
    { 
        if(p->data==key)
        {
            q->Next = p->Next;
            p->Next = first;
            first = p;

            return p; 
        }  
        q = p;
        p = p->Next;
    }
    return NULL;
} 
 
void Display()
{
    struct Node *p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->Next;
    }
}


int main()
{
  int a[5] = {1,2,3,4,5};
  Create(a,5);
  //Display();
  struct Node *s = Search(2);
  cout<<"The data is found is "<<s->data<<" "<<endl;

  struct Node *z = uplinear(3);
  if(z)
  {
    cout<<"The value which is upgraded is "<<z->data<<" "<<endl;
  }
  Display();
}