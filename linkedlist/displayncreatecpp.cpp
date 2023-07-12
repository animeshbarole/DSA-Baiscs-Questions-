#include<iostream>
using namespace std;

class Node
{
   public: //We have to make as pulic because we want to acces in the whole code
   int data;
   Node *next;
};

class Linkedlist
{
    private:
    Node *first =NULL; //Here it is intialise the Node 
    public:
  
    Linkedlist(int A[],int n);  //Contrutor creating linked list with the help of this
    ~Linkedlist(); //Destructor
    
    void Display();
    

};

Linkedlist::Linkedlist(int A[],int n)
{
    Node *t,*last ;
    first = new Node;
    first->data= A[0];
    first->next = NULL;
    last = first;
       for(int i =1;i<n;i++)
       {
           t = new Node;
           t->data = A[i];
           t->next = NULL;
           last->next = t;
           last = t;
       }


}

Linkedlist::~Linkedlist()
{
    Node *P = first;
    while (first)
    {
        first =first->next;
        delete P;
        P = first;
    }
    
}

void Linkedlist::Display()
{
    Node *S = first;
    while (first)
    {
        cout<<S->data<<" ";
        S = S->next;       
 
    }
    cout<<endl;
    
}

int main()
{

  int A[] = {1,2,3,4,5};
  Linkedlist l(A,5);  //Creating object of the class 
  l.Display();  //Calling with th object.
  
}