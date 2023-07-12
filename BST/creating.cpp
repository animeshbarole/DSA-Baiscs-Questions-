#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
}*root =NULL;

void insert(int key)
{
   struct Node *t = root;
   struct Node *r,*p;  //R is following pointer and p is used for creating a new Node.

   if(root==NULL)
   {
       p = new Node;
       p->data = key;
       p->left = p->right=NULL;
       root = p;
       return ;
   }

   while(t!=NULL)
   {
       r=t;
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
   }
   p = new Node;
   p->data = key;
   p->left =p->right = NULL;

   if(key<r->data)
   {
       r->left  = p;
   }
   else
    r->right = p;

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

Node * Search(int key)
{
    struct Node *t =root;

 while(t!=NULL){
    if(t->data==key)
    {
        return t;
    }
    else if(key<t->data)
    {
        t = t->left;
    }
    else 
    {
        t = t->right;
    }
 }
 return NULL;
}

int main()
{
   insert(20);
   insert(10);
   insert(40);
   insert(70);
   insert(90);

   inorder(root);

   struct Node *r  = Search(10);
   cout<<r->data<<" ";

}