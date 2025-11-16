#include <iostream>
#include <math.h>
#include <vector>
#include <climits>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int x){
            val = x;
            left =right = NULL;
        }
};

class Info{
    public:
        int min, max, size;

        Info(int mi, int mx, int s){
            min = mi;
            max = mx;
            size = s;
        }
};

Info LargestBST(TreeNode* root){
    if(root == NULL){
        return Info(INT_MAX, INT_MIN, 0);
    }

    Info lans = LargestBST(root->left);
    Info rans = LargestBST(root->right);

    if(root->val > lans.max && root->val < rans.min){
        int curr_min = min(root->val, lans.min);
        int curr_max = max(root->val, rans.max);
        int s = lans.size + rans.size + 1;

        // cout << "<" << curr_min << ":"<< curr_max <<":"<<s<<">" << endl;

        return Info(curr_min, curr_max, s);
    }
    return Info(INT_MIN, INT_MAX, max(lans.size, rans.size));
}

int main(){

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(8);
    root->right->right = new TreeNode(70);

    Info ans = LargestBST(root);
    cout << ans.size << endl;

    return 0;
}