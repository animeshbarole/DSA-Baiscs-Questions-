#include<iostream>
#include<queue>
using namespace std;


class Node
{
    public:
    int data;
     Node *left;
     Node *right;

   Node(int data)
   {
       this->data  = data;
       this->left = this->right = NULL;
   }  
};

void leveOrderCreate(Node *  &root)  //We have to pass it with address if we want to print
{
    queue<Node *> q;
    int d;
    cout<<"Enter the data for the root"<<endl;
    cin>>d;
    root = new Node(d);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the data left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
          temp->left = new Node(leftdata);
          q.push(temp->left);
        }

       cout<<"Enter the data right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
          temp->right = new Node(rightdata);
          q.push(temp->right);
        }
        
    }

    
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
   Node *root = NULL;
   leveOrderCreate(root);
    leveorder(root);
}