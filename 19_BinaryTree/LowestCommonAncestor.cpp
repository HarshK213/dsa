#include <iostream>
#include <vector>
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

static int idx = -1;
TreeNode* BinaryTree(vector<int> &PreOrder){
     idx++;
     if(PreOrder[idx] == -1)return NULL;
     TreeNode* root = new TreeNode(PreOrder[idx]);
     root->left = BinaryTree(PreOrder);
     root->right = BinaryTree(PreOrder);
     return root;
}

TreeNode* LCA(TreeNode* root,TreeNode* p,TreeNode* q){
     if(root == NULL)return NULL;
     if(root == p || root == q)return root;

     TreeNode* leftPart = LCA(root->left,p,q);
     TreeNode* rightPart = LCA(root->right,p,q);

     if(leftPart != NULL && rightPart != NULL)return root;
     else if(leftPart != NULL)return leftPart;
     else return rightPart;
}

int main(){
     vector<int> PreOrder = {};
     TreeNode* root = BinaryTree(PreOrder);
     // TreeNode* commanNode = LCA(root,)

     return 0;
}