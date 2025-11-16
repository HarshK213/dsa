#include <iostream>
#include <climits>
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

bool helper(TreeNode* root, TreeNode* min, TreeNode* max){
     if(root == NULL){
          return true;
     }

     if(min!= NULL && root->val <= min->val){
          return false;
     }
     if(max!=NULL && root->val >= max->val){
          return false;
     }

     return (helper(root->left, min, root) && helper(root->right, root, max));
}

bool ValidBST(TreeNode* root){
     return helper(root, NULL, NULL);
}

int main(){

     vector<int> arr = {5,1,4,3,6};

     cout << (ValidBST?"Valid":"Not Valid") << endl;

     return 0;
}