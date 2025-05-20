#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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

int MaxWidth(TreeNode* root){
     queue<pair<TreeNode*, unsigned long long >> q;
     q.push({root,0});
     int maxW = 0;

     while(!q.empty()){
          unsigned long long stIdx = q.front().second;
          unsigned long long eIdx = q.back().second;
          maxW = max(maxW,(int)(eIdx-stIdx+1));
          for(int i = 0; i < q.size(); i++){
               TreeNode* currNode = q.front().first;
               int Idx = q.front().second;
               q.pop();
               if(currNode->left){
                    q.push({currNode->left, (2*Idx + 1)});
               }
               if(currNode->right){
                    q.push({currNode->right, (2*Idx+2)});
               }
          }
     }
     return maxW;
}

int main(){
     // vector<int> PreOrder = {1,3,5,-1,-1,3,-1,-1,2,-1,9,-1,-1};
     vector<int> PreOrder = {1,3,5,6,-1,-1,-1,-1,2,-1,9,7,-1,-1,-1};
     TreeNode* root = BinaryTree(PreOrder);
     cout << MaxWidth(root) << endl;

     return 0;
}