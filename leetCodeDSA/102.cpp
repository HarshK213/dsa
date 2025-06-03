#include <iostream>
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

static int idx = -1;
TreeNode* BinaryTree(vector<int> PreOrder){
     idx++;
     if(PreOrder[idx] == -1)return NULL;
     TreeNode* root = new TreeNode(PreOrder[idx]);
     root->left = BinaryTree(PreOrder);
     root->right = BinaryTree(PreOrder);
     return root;
}

vector<vector<int>> LevelOrderTraversal(TreeNode* root){
     vector<vector<int>> ans;
     if (root == nullptr) return ans;

     queue<TreeNode*> q;
     q.push(root);

     while (!q.empty()) {
          int size = q.size();
          vector<int> level;

          for (int i = 0; i < size; ++i) {
               TreeNode* curr = q.front();
               q.pop();
               level.push_back(curr->val);

               if (curr->left) q.push(curr->left);
               if (curr->right) q.push(curr->right);
          }

          ans.push_back(level);
     }

     return ans;

}

int main(){
     vector<int> PreOrder = {1,2,3,-1,-1,4,-1,-1,5,6,-1,-1,7,-1,-1};
     TreeNode* root = BinaryTree(PreOrder);
     vector<vector<int>> ans = LevelOrderTraversal(root);
     
//   for Prinring the Level Order Traversal.     
     cout << "[" << " ";
     for(int i = 0;i<ans.size();i++){
          cout << "[" << " ";
          for(int j = 0;j<ans[i].size();j++){
               cout << ans[i][j] << " ";
          }
          cout << "]" << ",";
     }
     cout << "]" << " ";
     cout << endl;
 
 
     return 0;
}