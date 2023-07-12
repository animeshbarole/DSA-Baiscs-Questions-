#include<iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
  
    
          if(root==NULL)
          {
              return false;
          }
         
        targetSum  = targetSum - root->val;  //It is decreasing the value of the sum when go to the root->val
         //When the targetsum become zero then and it satisfy the  condtion of leaf node that means it is right path .
         
        
        if(targetSum==0&&root->left==NULL&&root->right==NULL)
        {
            return true;
        }            
        
        else
        {
            return (hasPathSum(root->left,targetSum)||hasPathSum(root->right,targetSum));
        }
        
    }
};