#include <iostream>
#include <vector>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right

        TreeNode(int x){
            val = x;
            left = right = NULL;
        }
};

TreeNode* prev = NULL;
TreeNode* first = NULL;
TreeNode* second = NULL;

void Inorder(TreeNode* root){
    if(root == NULL)return;
    Inorder(root->left);
    if(prev != NULL && root->val<prev->val){
        if(!first){
            first = prev;
        }
        second = root;
    }
    prev = root;
    Inorder(root->right);
}

void swapNodes(TreeNode* p, TreeNode* q){
    int temp = p->val;
    p->val = q->val;
    q->val = temp;
}

void Recover(TreeNode* root){
    Inorder(root);
    if(first!= NULL && second!=NULL){
        swapNodes(first,second);
    }
}