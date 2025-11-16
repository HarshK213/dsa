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

TreeNode* helper(vector<int>& arr, int st, int e){
     if(st>e)return NULL;
     int mid = st+(e-st)/2;
     TreeNode* root = new TreeNode(arr[mid]);
     root->left = helper(arr,0,mid-1);
     root->right = helper(arr,mid+1,e);
     return root;
}

TreeNode* SortedArrToBST(vector<int>& arr){
     int st = 0, e = arr.size()-1;
     return helper(arr,st,e);
}

int main(){
     vector<int> vec = {-3,-2,2,4,5};
     TreeNode* root = SortedArrToBST(vec);
     cout << root->val << endl;

     return 0;
}