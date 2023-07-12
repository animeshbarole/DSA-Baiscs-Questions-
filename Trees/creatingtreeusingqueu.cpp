#include<iostream>
#include<queue>
using namespace std;
 
struct Node 
{
   int data;
   struct Node * left;
   struct Node * right;

   Node(int data)
   {
       this->data = data;
       this->left = this->right =NULL;
   }

};


int count(Node *r)
{
    int x,y;

   //Counting nummber of nodes  
    if(r!=NULL)
    { 
       x= count(r->left);
       y= count(r->right);

       return x+y+1;
    }


//Adding the whole data
     if(r!=NULL)
    { 
       x= count(r->left);
       y= count(r->right);

       return x+y+r->data;
    }
    return 0;
}


void levelorder(Node *root){



    if(root==NULL)
    {
        return;
    }

   queue< Node *> q;
   q.push(root);
   
   while (!q.empty())
   {
      Node *p = q.front();  //we are pointing towards 
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
   cout<<endl;
   

}
int countLeaves(Node* root)
{
    int x,y;
    
   if(root==NULL)
   {
       return 0;
   }
  
       x = countLeaves(root->left);
       y = countLeaves(root->right);
       
       if(x==0&&y==0)
       
         return   1;
       
       else 
      
           return x+y;
      

}



int main()
{
   struct Node*  root = new Node(10);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left = new Node(40);
   root->left->right = new Node(50);
   levelorder(root);
 // cout<<"Number of nodes in the tree are   "<< count(root);
  cout<<"Total sum of nodes are "<< count(root)<<endl;
   cout<<countLeaves(root);
}
