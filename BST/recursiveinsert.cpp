#include<iostream>
using namespace std;


struct Node 
{
   int data;
   struct Node *left;
   struct Node *right;

}*root = NULL;

Node *Rinsert(struct Node *r,int key)
{
    struct Node *t = NULL;
    if(r==NULL)
    {
        t = new Node;
        t->data = key;
        t->left = t->right =NULL;
        return t;
    }

    if(key<r->data)
    {
        r->left = Rinsert(r->left,key);
    }
    else if(key>r->data)
    {
        r->right = Rinsert(r->right,key);
    }
  
    return r;
}

void Inoder(Node *p)
{
    if(p==NULL)
    {
        return;
    }

    else 
    {
        Inoder(p->left);
        cout<<p->data<<" ";
        Inoder(p->right);
    }
}

int main()
{
   root = Rinsert(root,40);
   Rinsert(root,250);
   Rinsert(root,10);
   Rinsert(root,60);

   Inoder(root);

}