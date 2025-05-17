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

void PreOrderTraversal(Node* root){
    if(root == NULL)return;
    cout << root->val << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(Node* root){
    if(root == NULL)return;
    InOrderTraversal(root->left);
    cout << root->val << " ";
    InOrderTraversal(root->right);
}

void PostOrderTraversal(Node* root){
    if(root == NULL)return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->val << " ";
}

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* curr = q.front();
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
    vector<int> Preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(Preorder);
    PreOrderTraversal(root);
    cout << endl;
    InOrderTraversal(root);
    cout << endl;
    PostOrderTraversal(root);
    cout << endl;
    LevelOrderTraversal(root);
    cout << endl;
    return 0;
}