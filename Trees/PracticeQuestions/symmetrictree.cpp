#include<iostream>
#include<queue>
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
    bool isSymmetric(TreeNode* root) {
      
      //Condition if root is equal to zero 
        if(!root)
        {
            return true;
        }
         queue<TreeNode*> check;  //inserting in queue
         check.push(root->left);
         check.push(root->right);
        
         while(!check.empty())
         {
             struct TreeNode* q1 = check.front();
             check.pop();
             struct TreeNode* q2 = check.front();
             check.pop();
            if (!q1 && q2) return false;
            if (!q2 && q1) return false;
             if(q1!=NULL&&q2!=NULL)
             {
                 if(q1->val!=q2->val)
                 {
                     return false;
                 }
                 
                 check.push(q1->left);
                 check.push(q2->right);
                 check.push(q1->right);
                 check.push(q2->left);
             }
         }
         
        return true;
        
    }
};