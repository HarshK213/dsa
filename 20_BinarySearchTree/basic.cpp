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

TreeNode* insert(TreeNode* root, int Val){
     if(root == NULL){
          return new TreeNode(Val);
     }

     if(Val < root->val){
          root->left = insert(root->left, Val);
     }else{
          root->right = insert(root->right, Val);
     }

     return root;
}

TreeNode* BST(vector<int> &arr){
     TreeNode* root = NULL;
     for(int i : arr){
          root = insert(root,i);
     }
     return root;
}

void InOrderTraversal(TreeNode* root){
     if(root == NULL)return;
     InOrderTraversal(root->left);
     cout << root->val << " ";
     InOrderTraversal(root->right);
}

bool BSTSearch(TreeNode* root, int key){
     if(root == NULL)return false;
     if(root->val == key) return true;
     if(root->val > key)return BSTSearch(root->left,key);
     else return BSTSearch(root->right,key);
}

TreeNode* getIS(TreeNode* root){
     while(root != NULL && root->left != NULL)root = root->left;
     return root;
}

TreeNode* delNode(TreeNode* root, int key){
     if(root == NULL)return NULL;
     if(key<root->val)delNode(root->left, key);
     else if(key>root->val)delNode(root->right, key);
     else{
          if(root->left == NULL){
               TreeNode* temp = root->right;
               delete root;
               return temp;
          }else if(root->right == NULL){
               TreeNode* temp = root->left;
               delete root;
               return temp;
          }else{
               TreeNode* IS = getIS(root->right);
               root->val = IS->val;
               root->right = delNode(root->right, IS->val);
          }
     }
     return root;
}

int main(){
     vector<int> arr = {5,1,2,7,32,8,4};
     TreeNode* root = BST(arr);
     
     InOrderTraversal(root);
     cout << endl;

     cout << BSTSearch(root,9) << endl;

     delNode(root,5);

     InOrderTraversal(root);
     cout << endl;

     return 0;
}