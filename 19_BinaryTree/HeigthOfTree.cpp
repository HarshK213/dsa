#include <iostream>
#include <algorithm>
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

int HeightOfTree(Node* root){
    if(root== NULL)return 0;
    int leftH = HeightOfTree(root->left);
    int rightH = HeightOfTree(root->right);
    return (max(leftH,rightH) + 1);
}

int main(){
    vector<int> Preorder = {1,2,-1,-1,3,-1,5,-1,-1};
    Node* root = BinaryTree(Preorder);
    cout << "Height of Tree : " << HeightOfTree(root) << endl;
    return 0;
}