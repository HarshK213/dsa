#include <iostream>
#include <vector>
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

int CountNodes(Node* root){
    if(root == NULL)return 0;
    int LeftCount = CountNodes(root->left);
    int RightCount = CountNodes(root->right);
    return (LeftCount + RightCount + 1);
}

int main(){
    vector<int> Preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BinaryTree(Preorder);
    cout << "Total Node in Tree : " << CountNodes(root) << endl;
    return 0;
}