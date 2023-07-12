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

int height(Node *p)
{
    int x,y;
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        x = height(p->left);
        y = height(p->right);
        return max(x,y)+1;
    }
}

Node* Inpre(Node *p)
{
    if(p&&p->right)
    {
        p =p->right;

    }
    return p;
}

Node* Insuc(Node *p)
{
    if(p&&p->left)
    {
        p =p->left;

    }
    return p;
}

Node *Delete(Node * p,int key)
{
    struct Node *q = NULL;

    if(p ==NULL)
    {
        return NULL;
    }

   if(p->left==NULL && p->right==NULL)
{
    if(p==root)
      root=NULL;
      delete p;
    return NULL;
}
    if(key<p->data)
    {
        p->left = Delete(p->left,key);
    }
    else if(key>p->data)
    {
        p->right = Delete(p->right,key);
    }
    else 
    {
        if(height(p->left)>height(p->right))
        {
            q =  Inpre(p->left);
            p->data  = q->data;
            p->left=Delete(p->left,q->data);
        }
        else
        {
            q =  Insuc(p->right);
            p->data  = q->data;
            p->right=Delete(p->right,q->data);
        }
    }
    return p;
}

int main()
{
   root = Rinsert(root,10);
   Rinsert(root,30);
   Rinsert(root,60);
   Rinsert(root,20);

 

   Delete(root,10);
   Inoder(root);
}