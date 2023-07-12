#include<iostream>
using namespace std;

struct Node {

  int data;
  struct Node *Next;
 
} *first =NULL;

int count(struct Node *p)
{
    int co=0;
    while(p)
    {  
       co++;
       p = p->Next;
    }
    return co;
}

void insert(struct Node *p,int index, int x)
{  
    
    struct Node *t;
    if(index<0||index>count(p))
    {
        return ;
    }
    t = new Node;
    t->data = x;
    if(index==0)
    {
        t->Next = first;
        first = t;
    }
    else{
         p = first;

        for(int i = 0;i<index-1;i++)
        {
            p = p->Next;
        }
        t->Next = p->Next;
        p->Next = t;


    }
   

}

void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->Next;
    }
}

int main()
{

    insert(first,0,1);
    insert(first,1,2);
    insert(first,2,13);
    insert(first,3,12);
    display(first);

}