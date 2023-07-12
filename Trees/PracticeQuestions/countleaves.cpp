#include<iostream>
#include<queue>
using namespace std;

struct Node
{
   int data;
   Node *left;
   Node *right;

   Node(int d)   //Constructor
   {
       data =d;
       left = right = NULL;
   }

};


Node* create(Node *r)
{
    
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    r  =new Node(data);
      if(data==-1)
      {
          return NULL;    
      }
      
            cout<<"Enter the data at the left of "<<data<<endl;
            create(r->left);

            cout<<"Enter the data at the right of "<<data<<endl;
            create(r->right);
      
    return r;

}

void leveorder(Node *r)
{

   if(r==NULL)
   {
       return ;
   }
   queue<Node *> q;
   q.push(r);  //we are putting address

   while(!q.empty())
   { 
       struct Node* p = q.front();
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
    struct Node* root;
   struct Node *s =  create(root);
    leveorder(s);
   
   //countLeaves(root);
 }



