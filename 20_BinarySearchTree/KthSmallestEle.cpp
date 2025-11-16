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

int order = 0;

int KthSmallestEle(TreeNode* root, int k){
    if(root==NULL){
        return -1;
    }

    if(root->left){
        int leftans = KthSmallestEle(root->left, k);
        if(leftans != -1){
            return leftans;
        }
    }

    if(order+1 == k){
        return root->val;
        order++;
    }

    if(root->right){
        int rightans = KthSmallestEle(root->right, k);
        if(rightans != -1){
            return rightans;
        }
    }

    return -1;
}