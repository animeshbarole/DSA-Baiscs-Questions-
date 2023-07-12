#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  struct Node *next;
};

class LinkedList
{
    private:
    Node *first =NULL;
    public:
    LinkedList(int a[],int n)
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

    void insertedsorted(int key)
    {
        Node *p = first;
        Node *q = NULL;
         
        if(key<first->data)
        {
           Node *t = new Node;
            t->data = key;
            t->next = first;
            first = t;
        } 
        while(p&&p->data<key)
        {
            q= p;
            p = p->next;
        }

        Node *temp = new Node;
        temp->data = key;
        temp->next = q->next;
        q->next = temp;



    }

    void diplay()
{
    Node *p  =first;
    while(p!=0)
    {
       cout<<p->data<<" ";
       p  =p->next;
    }
    cout<<endl;
}

    
};




int main()
{
    int size = 5;
    int key = 80;
   int arr[size] ={10,20,30,50,70};
    LinkedList l(arr,size);
    l.insertedsorted(40);
    l.diplay();
}