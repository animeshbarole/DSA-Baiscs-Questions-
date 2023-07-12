#include<iostream>
using namespace std;

struct Node 
{
    int Data;
    struct Node *Next;
}*First=NULL ;

void create(int a[],int n)
{
    struct Node *t,*last;
    First = new Node;
    First->Data=a[0];
    First->Next=NULL;
    last = First;
      for(int i = 1;i<n;i++)
      {
          t = new Node;
          t->Data=a[i];
          t->Next=NULL;
          last->Next=t;
          last = t;
      }

}


struct Node* linear(struct Node *q,int key)
{
    while(q)
    {
    if(key==q->Data)
    
        return q;

        q=q->Next; 
       

   }
   return NULL;
}

struct Node* rlinear(struct Node *r,int key)
{
    if(r==0)
      return NULL;

    if(key==r->Data)
    {
        return r;
    }  
    else
      {
          return rlinear(r->Next,key);
      }

}

struct Node* uplinear(struct Node *u,int key)
{
    struct Node* l = NULL;
   while(u)
   {
     if(key==u->Data)
     {
        l->Next= u->Next;
        u->Next = First;
        First = u;
       
        return u; //Return u that is that node which is going to move at the front
     }
      l=u;
      u = u->Next;
    
     
   }
  
return NULL; //If not fount than return NULL

}

void display(struct Node *P)
{
    while(P!=0)
    {
        cout<<P->Data<<" ";
        P=P->Next;
    }
    cout<<endl;
}


int main()
{
   int s = 5;
   int arr[s]={1,4,3,2,5};
   create(arr,s);
   //display(First);
 // cout<< linear(First,2)<<endl; //It is only cout the address of the node but we want value at which the key is found
 // cout<<rlinear(First,3)<<endl;
 // cout<<uplinear(First,3)<<endl;
    struct Node *temp;
    temp = linear(First,2);
    if(temp) //If the address part is not null then diplay data
    {
        cout<<temp->Data<<" "<<endl;
    }
    else
      cout<<"Key is not found"<<endl;

     temp = uplinear(First,2);
    if(temp) //If the address part is not null then diplay data
    {
        cout<<temp->Data<<" "<<endl;
    }
    else
      cout<<"Key is not found"<<endl; 
      
    

     display(First); 

}