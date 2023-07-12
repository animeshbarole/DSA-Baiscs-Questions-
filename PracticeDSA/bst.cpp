#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *left;
   struct Node *right;

}*root = NULL;

void insert(int key)
{
   Node *t = root;
   Node *r,*p; //R is following pointer and p is for the creating a new Node
   
   if(root==NULL)
   {
       p = new Node;
       p->data = key;
       p->left  = NULL;
       p->right  = NULL;
       root = p;

       return;
   }

   if(t!=NULL)
   {
       r = t;
       if(key<t->data)
       {
           t = t->left;
       }
       else if(key>t->data)
       {
           t = t->right;
       }
       else 
       return;

       p = new Node;
       p->data =key;
       p->left = p->right = NULL;

       if(key<r->data)
       {
        r->left = p;

       }
       else
        r->right = p;


   }

}

void inorder(struct Node *r)
{
    if(r)
    {
        inorder(r->left);
        cout<<r->data<<" "<<endl;
        inorder(r->right);
    }
   
}



int main()
{
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);
  inorder(root);
}