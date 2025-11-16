#include <iostream>
#include <climits>
#include <math.h>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};

TreeNode *insert(TreeNode *root, int Val)
{
    if (root == NULL)
    {
        return new TreeNode(Val);
    }

    if (Val < root->val)
    {
        root->left = insert(root->left, Val);
    }
    else
    {
        root->right = insert(root->right, Val);
    }

    return root;
}

TreeNode *BST(vector<int> &arr)
{
    TreeNode *root = NULL;
    for (int i : arr)
    {
        root = insert(root, i);
    }
    return root;
}

TreeNode *prev = NULL;

int minDiffInBST(TreeNode *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }

    int ans = INT_MAX;

    if (root->left)
    {
        int leftmin = minDiffInBST(root->left);
        ans = min(ans, leftmin);
    }

    if (prev != NULL)
    {
        ans = min(ans, root->val - prev->val);
    }
    prev = root;

    if (root->right)
    {
        int rightmin = minDiffInBST(root->right);
        ans = min(ans, rightmin);
    }

    return ans;
}