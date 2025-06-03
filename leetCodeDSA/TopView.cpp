#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

class Node{
     public:
          int val;
          Node* left;
          Node* right;

          Node(int x){
               val = x;
               left = right = NULL;
          }
};

static int idx = -1;
Node* BinaryTree(vector<int>& PreOrder){
     idx++;
     if(PreOrder[idx] == -1)return NULL;
     Node* root = new Node(PreOrder[idx]);
     root->left = BinaryTree(PreOrder);
     root->right = BinaryTree(PreOrder);
     return root;
}

vector<int> TopView(Node* root){
     queue<pair<Node*,int>> q;
     map<int,int> m;

     q.push({root,0});

     while(!q.empty()){
          Node* curr = q.front().first;
          int currHoriDis = q.front().second;
          q.pop();

          if(m.find(currHoriDis) == m.end()){
               m[currHoriDis] = curr->val;
          }

          if(curr->left != NULL)q.push({curr->left, currHoriDis-1});
          if(curr->right != NULL)q.push({curr->right, currHoriDis+1});
     }
 
     vector<int> ans;
     for(auto i:m){
          ans.push_back(i.second);
     }
     return ans;
}

int main(){
     vector<int> PreOrder = {1,2,-1,-1,3,4,6,-1,-1,7,-1,-1,5,-1,-1};
     Node* root = BinaryTree(PreOrder);
     vector<int> Top = TopView(root);
     for(int i:Top)cout << i << " ";
     cout << endl;
     
     return 0;
}