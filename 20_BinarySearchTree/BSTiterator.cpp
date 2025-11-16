#include <iostream>
#include <stack>
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

class Solution{
    public:

        stack<TreeNode*> st;

        void storeAllLeft(TreeNode* root){
            while(root!=NULL){
                st.push(root);
                root= root->left;
            }
        }

        void BSTiterator(TreeNode* root){
            storeAllLeft(root);
        }

        int next(){
            TreeNode* ans = st.top();
            st.pop();

            storeAllLeft(ans->right);
            return ans->val;
        }

        bool hasNext(){
            return st.size()>0;
        }
};