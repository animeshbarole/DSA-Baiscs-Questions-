#include<iostream>
using namespace std;


struct Node
{
   
   int data;
   Node *next;

}*Head = NULL;

class Linkedlist
{
    public:
    Linkedlist(int A[],int n)
    {
        struct Node *t,*Last;
        Head = new Node;
        Head->data =A[0];
        Head->next = Head;
        Last = Head;
          for(int i =1;i<n;i++)
          {
                 t = new Node;
                 t->data= A[i];
                 t->next = Last->next;
                 Last->next = t;
                 Last = t;
          }
    
    }

    void display()
    {
        struct Node *p = Head;
      do
      {
          cout<<p->data<<" ";
          p = p->next;
      } while (p!=Head);
      cout<<endl;
      
    }


 int deleting(int index)
 {
     int x=0;
     struct Node *p = Head;
     struct Node *q;
   
      if(index<0||index>lenght())
      {
          return -1;
      }
      if(index ==1)
      {
          while(p->next!=Head)p=p->next;
          x = Head->data;
          if(Head==p)
          {
               delete Head;
               Head = NULL;
          }
          else
          {
              p->next = Head->next;
             
              delete Head;
              Head = p->next;

          }

      }
      else
      {
          for(int i = 0;i<index-2;i++)
          {
             p = p->next;
          }
          q = p->next;
          p->next = q->next;
          x = q->data;
          delete q;
      }
      return x;
 }

  
int lenght()
{
    struct Node*c = Head;
    int len = 0;
    do
    {
        len++;
        c =c->next;
    } while (c!=Head);
    return len;
    
}
 
    

};

int main()
{
    int size = 5;
   int A[size] = {1,2,30,4,5};
   Linkedlist l(A,size);
   l.display();
   cout<<"Data is deleted on that index is "<<l.deleting(4)<<endl;
   l.display();

  // l.display();
 


}