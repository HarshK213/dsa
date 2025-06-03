#include <iostream> 
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
            
        TreeNode(int x){
            val = x;
            left = right = NULL;
        }
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     if(root == NULL){
          return NULL;
     }
     if(root->val == p->val || root->val == q->val){
          return root;
     }

     TreeNode* leftPart = lowestCommonAncestor(root->left,p,q);
     TreeNode* rightPart = lowestCommonAncestor(root->right,p,q);

     if(leftPart && rightPart){
          return root;
     }else if(leftPart != NULL){
          return leftPart;
     }else{
          return rightPart;
     }
}