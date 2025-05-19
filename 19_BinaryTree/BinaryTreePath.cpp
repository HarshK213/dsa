#include <iostream>
#include <vector>
#include <string>
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

vector<string> ans;

void helper(TreeNode* root, string path){
     if(root->left == NULL && root->right == NULL){
          ans.push_back(path);
          return;
     }
     if(root->left)helper(root->left,path+"->"+to_string(root->left->val));
     if(root->right)helper(root->right,path+"->"+to_string(root->right->val));
}

vector<string> binaryTreePaths(TreeNode* root) {
     string s = to_string(root->val);
     helper(root,s);
     return ans;
}