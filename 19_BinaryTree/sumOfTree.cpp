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

int sumOfNodes(TreeNode* root){
     if(root == NULL)return 0;
     int leftSum = sumOfNodes(root->left);
     int rightSum = sumOfNodes(root->right);
     root->val += leftSum + rightSum;
     return root->val;
}

int main(){
     vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
     TreeNode* root = BinaryTree(arr);
     cout << sumOfNodes(root) << endl;
     return 0;
}