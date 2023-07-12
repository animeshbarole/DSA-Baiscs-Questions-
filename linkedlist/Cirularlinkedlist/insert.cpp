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



 void insert(int index,int x ) //Inserting index and value
 {
      struct Node *t;
      struct Node *p = Head;
   
     if(index<0||index>lenght())
     {
         return;
     }

      if(index==0) //Means it is before head
      {  
           t = new Node;
            t->data =x;
        
           if(Head==NULL)
           {
             
               Head = t;
               Head->next =Head;
           }
           else
           {
            while(p->next!=Head)
            {
                 p = p->next;
            }
            p->next = t;
            t->next = Head;
            Head =t;
           } 
      }
       else
       {
           for(int i = 0;i<index-1;i++)
           {
               p = p->next;
           }
          // t =new Node;
           t->data = x;
           t->next = p->next;
           p->next = t;
       }
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
   int A[size] = {1,2,3,4,5};
   Linkedlist l(A,size);
   l.display();
   l.insert(10,10);
   l.display();
  cout<< l.lenght();

  // l.display();
 


}