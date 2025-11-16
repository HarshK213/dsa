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

TreeNode* LowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root== NULL){
        return NULL;
    }

    if(root->left && root->val > p->val && root->val > q->val){
        return LowestCommonAncestor(root->left,p,q);
    }else if(root->right && root->val < p->val && root->val < q->val){
        return LowestCommonAncestor(root->right, p,q);
    }else{
        return root;
    }
}