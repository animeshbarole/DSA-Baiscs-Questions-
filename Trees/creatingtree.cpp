#include<iostream>
using namespace std;


class Node
{
   public:
   int data;
   Node *left;
   Node *right;
   
   Node(int d)
   {
       data = d;
       left = NULL;
       right = NULL;
   }
  
};

Node *createtreeI(Node *r)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
     r = new Node(data);

     if(data==-1)
     {
         return NULL;
     }
     
     
         cout<<"Enter the data for inserting the left"<<data<<endl;
          createtreeI(r->left);
         cout<<"Enter the data for inserting the right"<<data<<endl;
          createtreeI(r->right);
         
    return r; 
     
    
}



int main()
{
    Node *root = NULL;
    createtreeI(root);

}