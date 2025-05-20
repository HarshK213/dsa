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

static int idx = -1;
TreeNode* BinaryTree(vector<int> &PreOrder){
     idx++;
     if(PreOrder[idx] == -1)return NULL;
     TreeNode* root = new TreeNode(PreOrder[idx]);
     root->left = BinaryTree(PreOrder);
     root->right = BinaryTree(PreOrder);
     return root;
}

vector<int> MorrisInorderTraversal(TreeNode* root){
     vector<int> ans;

     TreeNode* curr = root;
     while(curr != NULL){
          if(curr->left == NULL){
               ans.push_back(curr->val);
               curr = curr->right;
          }else{
               TreeNode* IP = curr->left;
               while(IP->right != NULL && IP->right != curr)IP = IP->right;

               if(IP->right == NULL){
                    IP->right = curr;
                    curr = curr->left;
               }else{
                    IP->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
               }
          }
     }

     return ans;
}

int main(){
     vector<int> PreOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
     TreeNode* root = BinaryTree(PreOrder);
     vector<int> ans = MorrisInorderTraversal(root) ;
     for(int i : ans)cout << i << " ";
     cout << endl;
     return 0;
}