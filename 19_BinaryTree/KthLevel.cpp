#include <iostream>
#include <vector>
#include <queue>
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

Node* BuildTree(vector<int>& PreOrder){
     idx++;
     if(PreOrder[idx] == -1)return NULL;
     Node* root = new Node(PreOrder[idx]);
     root->left = BuildTree(PreOrder);
     root->right = BuildTree(PreOrder);
     return root;
}

/*

This is approach 1 using level Tranversal

void KthLevel(Node* root,int k){
     queue<Node*> q;
     int currLevel = 1;
     q.push(root);
     q.push(NULL);
     while(q.size()>0){
          if(k == currLevel){
               while(q.front() != NULL){
                    cout << q.front()->val << " ";
                    q.pop();
     
               }
               return;
          }
     
         Node* curr = q.front();
         q.pop();
         if(curr == NULL){
             if(!q.empty()){
                 cout << endl;
                 q.push(NULL);
                 currLevel++;
                 continue;
             }else{ break;}
         }
     //     cout << curr->val << " ";
         if(curr->left != NULL)q.push(curr->left);
         if(curr->right != NULL)q.push(curr->right);
     }
}

*/

void KthLevel(Node* root,int k){
     if(root == NULL)return;
     if(k==1){
          cout << root->val << " ";
          return;
     }
     KthLevel(root->left,k-1);
     KthLevel(root->right,k-1);
}

int main(){
     vector<int> Preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
     Node* root = BuildTree(Preorder);
     KthLevel(root,3);
     cout << endl;
     return 0;
 }