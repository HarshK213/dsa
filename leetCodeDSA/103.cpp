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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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

     for(int i = 0;i<ans.size();i++){
          if(i%2 == 1){
               reverse(ans[i].begin(), ans[i].end());
          }
     }

     return ans;
}