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

void helper(TreeNode* root, int currNum, int &sum){
     if(root->left == NULL && root->right == NULL){
          sum+=currNum*10+root->val;
          return;
     }
     currNum = currNum*10+root->val;
     if(root->left != NULL){
          helper(root->left, currNum, sum);
     }
     if(root->right != NULL){
          helper(root->right, currNum, sum);
     }
     return;
}
int sumNumbers(TreeNode* root) {
     int currNum = 0, sum = 0;
     helper(root, currNum, sum);
     return sum;
}