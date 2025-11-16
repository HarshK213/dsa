#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode* next;

        TreeNode(int x){
            val = x;
            left = right = next = NULL;
        }
};

TreeNode* helper(TreeNode* root){
    queue<TreeNode*> q;
    TreeNode* prev = NULL;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                prev->next = curr;
                prev = NULL;
                q.push(NULL);
                continue;
            }else{break;}
        }

        if(root->left != NULL)q.push(root->left);
        if(root->right != NULL)q.push(root->right);

        if(prev != NULL){
            prev->next = curr;
        }

        prev = curr;

    }
}