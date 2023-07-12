#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node {
    
    public :
     int data ;
     Node * left ;
     Node * right ;

     Node(int d)
     {
        this->data =d;
        this->left = this->right =NULL;

     }
     
    
};

void Create(Node * &root){
      
      queue<Node *> q;
      int data;
      cout<<"Enter the data you want to enter"<<endl;
      cin>>data;
      root = new Node(data);
      q.push(root);

      while(!q.empty())
      {
           Node * temp = q.front();
           q.pop();

           int leftNode;
           cout<<"Enter the value you want to enter at left of "<<temp->data<<endl;
           cin>>leftNode;
           if(leftNode!=-1)
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

int main()
{
    Node *root = NULL;
    Create(root);
}