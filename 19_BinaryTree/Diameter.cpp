#include <iostream>
#include <vector>
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

// this is approach 1 :- TC:O(n*n)
int HeightOfTree(Node* root){
     if(root== NULL)return 0;
     int leftH = HeightOfTree(root->left);
     int rightH = HeightOfTree(root->right);
     return (max(leftH,rightH) + 1);
 }

int Diameter(Node* root){
     if(root == NULL)return 0;
     int leftHeight = HeightOfTree(root->left);
     int rightHeight = HeightOfTree(root->right);
     int currentDiameter = leftHeight + rightHeight;

     int LeftTreeDiameter = Diameter(root->left);
     int RightTreeDiameter = Diameter(root->right);

     return max(currentDiameter, max(LeftTreeDiameter, RightTreeDiameter));
}


// approach 2 : Optimized -> TC:O(n);

int ans = 0;
int Diameter(Node* root){
     if(root == NULL)return 0;
     int LeftH = Diameter(root->left);
     int RightH = Diameter(root->right);
     ans = max(ans,(LeftH+RightH));
     return max(LeftH,RightH)+1;
}