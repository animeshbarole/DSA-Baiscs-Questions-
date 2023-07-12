#include<iostream>
using namespace std;

struct Node
{
    int data; //Key
    Node *left;
    Node *right;
    Node(int d) //Creating construtor for appplying same operations in it.
    {
        data = d;
        right = left = NULL;

    }

};



int main()
{
    Node *root = new Node(10); //Creating root node pointer and applying 
    root->left = new Node(20);
    root->right = new Node (40);
    root->left->left = new Node(50);
    
}

