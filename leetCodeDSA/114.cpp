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

class Solution {
public:

    TreeNode* NR = NULL;
    void flatten(TreeNode* root) {
        if(root == NULL)return;
        flatten(root->right);
        flatten(root->left);
        root->left = NULL;
        root->right = NR;
        NR = root;
    }
};