#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class Node
{
   public:
   int data;
   Node *right;
   Node *left;

   Node(int data)
   {
    this->data= data;
    this->left = this->right = NULL;
   }
};

void CreateNode(Node * &root)
{
    queue<Node *> q;
    int data;
    cout<<"Enter the data for the root Node "<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);
           
           while(!q.empty())
           {
               Node *temp = q.front();
               q.pop();
                
               int leftNode;
               cout<<"Enter the value at the left of "<<temp->data<<endl; 
               cin>>leftNode;
               if(leftNode !=-1)
               {
                  temp->left = new Node(leftNode);
                  q.push(temp->left);
               }

               int rightNode;
               cout<<"Enter the value at the right of "<<temp->data<<endl;
               cin>>rightNode;
               if(rightNode!=-1)
               {
                temp->right  = new Node(rightNode);
                q.push(temp->right);
               }

           }


}


void printOrder(Node * &root)
{
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *p = q.front();
        cout<<p->data ;
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
  CreateNode(root);
  printOrder(root);
}
