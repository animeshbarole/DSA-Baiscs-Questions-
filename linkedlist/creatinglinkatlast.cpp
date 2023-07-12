#include<iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;

}*first = NULL;

void last(int x)//Only passing value because we know that it is goona add at last 
{ 
   struct Node *last,*t;
   t = new Node;
   t->data = x;
   t->next =NULL;

   if(first ==NULL)
   {
     first = last = t;
   }

   else
   {
     last->next = t;
     last = t;
   }

   
}
void display(struct Node *p)
{
  while(p)
  {
    cout<<p->data<<" ";
    p =p->next;
  }
}

int main()
{
 
     
   int x; 
  for(int i =1;i<=5;i++)
  {
      cout<<"Enter the number which you want to enter "<<endl;
      cin>>x;
      last(x);
  }
   display(first); 
   
}