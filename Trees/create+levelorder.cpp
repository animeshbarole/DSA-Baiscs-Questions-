#include<iostream>
#include<queue>
using namespace std;


class Node
{
public:
 int data;
 Node *left;
 Node* right;

 //Creating tree

   
 };

 
   Node* create(Node * root)
   {
       Node *r = root;
       int d;
       cout<<"Enter the data you want to enter "<<endl;
       cin>>d;
       r = new Node;
       r->data =d;
       r->left = r->right = NULL;

       if(d==-1)
       {
           return NULL;
       }

       else
       {
           cout<<"Enter the data you want to enter at left "<<d<<endl;
          r->left =  create(r->left);

           cout<<"Enter the data you want to enter at right"<<d<<endl;
          r->right =  create(r->right);
       }
       

       return r;
   }

void Inorder(Node *root)
{
    if(root==NULL)
    {
        return;

    }
    
    else
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}


void postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    else 

    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    cout<<endl;
}


void preorder(Node *r)
{
    if(r==NULL)
    {
        return;
    }
    else
    {
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }
    cout<<endl;
}



void leveorder(Node *root)
{

   queue<Node *> q;
   q.push(root);

   while(!q.empty())
   {
     Node*  p = q.front();
       cout<<p->data<<" ";
       q.pop();
 
       if(p->left)
       {
           
           q.push(p->left);
       }

       if(p->right)
       {
           q.push(p->right);
       }


   }   

}




int main()
{
    Node *root =  NULL;
   root =  create(root);

   cout<<"Level order of the following"<<endl;
    leveorder(root);
   cout<<"Preorder of the following"<<endl; 
    preorder(root);
   cout<<"Postorder of the following"<<endl; 
    postorder(root);

    cout<<"Inoder of the following"<<endl;
    Inorder(root);
    
   // 10 20 40 -1-1 30 -1 -1 50 -1 -1

}