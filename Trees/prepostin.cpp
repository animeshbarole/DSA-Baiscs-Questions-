#include<iostream>
using namespace std;


class Node {

public:
   int data;
    Node *left;
    Node *right;

Node(int d)
{
    data =d;
    left = NULL;
    right = NULL;
}


};

void pre( Node *r)
{
    
   if(r==NULL)
    {
        return ;
    }

    cout<<r->data<<" ";
    pre(r->left);
    pre(r->right);
}

void in(Node *i)
{
    if(i==NULL)
    {
        return;
    }
    in(i->left);
    cout<<i->data<<" ";
    in(i->right);
}
  
  void post(Node *i)
{
    if(i==NULL)
    {
        return;
    }
    in(i->left);
    in(i->right);
    cout<<i->data<<" ";
}



 int main()
 {
    Node *root = new Node(10) ; 
    root->left = new Node(30);
    root->right = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
  cout<<" Pre order triversal"<<endl;
  pre(root);
  cout<<" in order triversal"<<endl;
  in(root);

 cout<<" post order triversal"<<endl;
    post(root);
    
    
    

    

 


 }