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

TreeNode* NR = NULL;
void FlatBT_LL(TreeNode* root){
     if(root == NULL)return;
     FlatBT_LL(root->right);
     FlatBT_LL(root->left);
     root->left = NULL;
     root->right = NR;
     NR = root;
}

int main(){
     return 0;
}
