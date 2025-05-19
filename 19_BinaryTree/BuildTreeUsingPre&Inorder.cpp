#include <iostream>
#include <vector>
#include <queue>
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

int index(vector<int> & InOrder, int val, int l, int r){
     for(int i = l; i <= r; i++){
          if(InOrder[i] == val)return i;
     }
     return -1;
}

TreeNode* helper(vector<int> &PreOrder, vector<int> &InOrder, int &preIdx, int l, int r){
     if(l>r)return NULL;
     cout << preIdx << endl;
     TreeNode* root = new TreeNode(PreOrder[preIdx]);
     preIdx++;
     int inIdx = index(InOrder,root->val,l,r);
     root->left = helper(PreOrder, InOrder, preIdx, l, inIdx-1);
     root->right = helper(PreOrder, InOrder, preIdx, inIdx+1, r);
     return root;
}

TreeNode* BinaryTree(vector<int> &PreOrder, vector<int> &InOrder){
     int preIdx = 0;
     return helper(PreOrder, InOrder, preIdx, 0, InOrder.size()-1);
}

void LevelOrderTraversal(TreeNode* root){
     queue<TreeNode*> q;
     q.push(root);
     q.push(NULL);
     while(q.size()>0){
         TreeNode* curr = q.front();
         q.pop();
         if(curr == NULL){
             if(!q.empty()){
                 cout << endl;
                 q.push(NULL);
                 continue;
             }else{ break;}
         }
         cout << curr->val << " ";
         if(curr->left != NULL)q.push(curr->left);
         if(curr->right != NULL)q.push(curr->right);
     }
 }

int main(){
     vector<int> PreOrder = {3,9,20,15,7};
     vector<int> InOrder = {9,3,15,20,7};
     TreeNode* root = BinaryTree(PreOrder, InOrder);
     LevelOrderTraversal(root);
     cout << endl;
     return 0;
}