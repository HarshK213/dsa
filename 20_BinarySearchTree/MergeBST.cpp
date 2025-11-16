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

void InorderVec(TreeNode* root, vector<int> &vec){
    if(root == NULL){
        return;
    }
    InorderVec(root->left, vec);
    vec.push_back(root->val);
    InorderVec(root->right, vec);

}

TreeNode* BuildBST(vector<int> &vec, int st, int e){
    if(st>e)return NULL;
    int mid = st+(e-st)/2;
    TreeNode* root = new TreeNode(vec[mid]);
    root->left = BuildBST(vec,st,mid-1);
    root->right = BuildBST(vec, mid+1, e);
    return root;
}

TreeNode* merge(TreeNode* root1, TreeNode* root2){
    vector<int> arr1,arr2,temp;
    InorderVec(root1, arr1);
    InorderVec(root2, arr2);

    int i = 0, j = 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }else{
            temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i<arr1.size()){
        temp.push_back(arr1[i]);
        i++;
    }

    while(j<arr2.size()){
        temp.push_back(arr2[j]);
        j++;
    }

    TreeNode* root = BuildBST(temp, 0, temp.size()-1);

    return root;
}