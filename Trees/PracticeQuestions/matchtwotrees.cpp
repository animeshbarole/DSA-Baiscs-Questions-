
//Iterative Verion
 //bool isSameTree(TreeNode* p, TreeNode* q) {
 //       
 //       queue<TreeNode *> r;
 //       r.push(p);
 //       r.push(q);
 //       
 //       while(!r.empty())
 //       {
 //           TreeNode *q1 = r.front();
 //           r.pop();
 //           TreeNode *q2 = r.front();
 //           r.pop();
 //           
 //           if(q1==NULL&&q2==NULL){return true;}
 //           if(q1==NULL||q2==NULL){return false;}
 //           if(q1->val!=q2->val)
 //           {
 //               return false;
 //           }
 //           r.push(q1->left);
 //           r.push(q2->left);
 //           r.push(q1->right);
 //           r.push(q2->right);
 //       }
 //       return true;
 //   }
//}//;