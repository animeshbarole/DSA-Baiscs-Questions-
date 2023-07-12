#include<iostream>
#include<queue>
using namespace std;


class Node
{
   public:

   int data;
   Node *left;
   Node *right;

   Node(int d)
   {
       data  =d;
      this->left = this->right = NULL;
   }

};

void pre(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}

void levelorder(Node * r)
{
    queue<Node *> q;
    q.push(r);

    while(!q.empty())
    {
        Node *temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}

void createlevel(Node * root)
{
    queue<Node *> q;
    int d;
    cin>>d;
    root = new Node(d);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout<<"Enter the data for the left node "<<temp->data;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the data for the right of the node "<<temp->data;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right= new Node(rightdata);
            q.push(temp->right);
        }

    }
}




int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    pre(root);
    levelorder(root);

}