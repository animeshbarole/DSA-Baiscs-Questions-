#include<iostream>
#include<math.h>

using namespace std;

struct Node 
{
   int data;
   struct Node *left;
   struct Node *right;
   int height; //Height we want to create height of the node 
}*root = NULL;




int NodeHeight(Node *p)
{
     int x,y;

     if(p==NULL)
     {
         return 0;
     }
     else 
     {
         x = NodeHeight(p->left);
         y = NodeHeight(p->right);
     }
     return max(x,y)+1;
}

struct Node * LLRotation(struct Node *p)
{
struct Node *pl=p->left;   //Show the digram in the copy 
struct Node *plr=pl->right;
     pl->right=p;
     p->left=plr;

p->height=NodeHeight(p);
pl->height=NodeHeight(pl);
if(root==p)
root=pl;
return pl;
}

struct Node * LRRotation(struct Node *p)
{
    return NULL;
}
struct Node * RRRotation(struct Node *p)
{
    return NULL;
}
struct Node * RLRotation(struct Node *p)
{
    return NULL;
}


int BalancedFactor(Node *p)
{
    int x,y;
    if(p==NULL)
    {
        return 0;
    }
    else 
    {
        x = BalancedFactor(p->left);
        y= BalancedFactor(p->right);
    }
    return x-y;
}


struct Node *Rinsert(struct Node *p,int key)
{
     
     struct Node *t ;
     if(p==NULL)
     {
         t = new Node;
         t->data = key;
         t->height = 1;
         t->left = t->right  = NULL;
         return t;
     }

     if(key<p->data)
     {
         p->left = Rinsert(p->left,key);
     }
     else 
     {
         p->right  = Rinsert(p->right,key);
     }

     p->height = NodeHeight(p);

    if(BalancedFactor(p)==2 && BalancedFactor(p->left)==1)
       return LLRotation(p);
else if(BalancedFactor(p)==2 &&BalancedFactor(p->left)==-1)
       return LRRotation(p);
else if(BalancedFactor(p)==-2 && BalancedFactor(p->right)==-1)
       return RRRotation(p);
else if(BalancedFactor(p)==-2 && BalancedFactor(p->right)==1)
       return RLRotation(p);  


     return p;
} 



int main()
{
    root = Rinsert(root,50);
    Rinsert(root,30);
    Rinsert(root,20);
    
}