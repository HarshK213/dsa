#include <iostream>
#include <vector>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int v){
            val = v;
            left = right = NULL;
        }
};

int MaxFromLeft(TreeNode* root){
    TreeNode* ans = NULL;
    while(root != NULL){
        ans = root;
        root=root->right;
    }
    return ans->val;
}

int MinFromRight(TreeNode* root){
    TreeNode* ans = NULL;
    while(root != NULL){
        ans = root;
        root=root->left;
    }
    return ans->val;
}

vector<int> InorderPredecessorSuccessor(TreeNode* root, int key){
    
    vector<int> vec = {NULL , NULL};

    while(root!= NULL){
        if(root->val < key){
            vec[0] = root->val;
            root = root->right;
        }else if(root->val > key){
            vec[1] = root->val;
            root= root->left;
        }else{
            if(root->left != NULL)vec[0] = MaxFromLeft(root->left);
            if(root->right != NULL)vec[1] = MinFromRight(root->right);
            break;
        }
    }

    return vec;
}

int main(){

    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    vector<int> ans = InorderPredecessorSuccessor(root,3);

    cout << "Pre : " << ans[0] << "|| Suc : " << ans[1] << endl;

    return 0;
}