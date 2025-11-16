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

TreeNode* BuildBST(vector<int> &vec, int &i, int UB){
    if(i>=vec.size() || vec[i]>=UB){
        return;
    }

    TreeNode* root = new TreeNode(vec[i]);
    i++;

    root->left = BuildBST(vec, i, root->val);
    root->right = BuildBST(vec, i, UB);

    return root;
}