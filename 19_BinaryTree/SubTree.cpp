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

bool isIdentical(Node* n1, Node* n2){
    if(n1 == NULL || n2 == NULL)return n1 == n2;
    bool isLeftSame = isIdentical(n1->left, n2->left);
    bool isRightSame = isIdentical(n1->right, n2->right);
    return (isLeftSame && isRightSame && (n1->val == n2->val));
}

bool isSubTree(Node* Tree, Node* SubTree){
    if(Tree == NULL || SubTree == NULL)return Tree == SubTree;
    if(Tree->val == SubTree->val && isIdentical(Tree,SubTree))return true;
    return (isSubTree(Tree->left,SubTree) || isSubTree(Tree->right,SubTree));
}

int main(){
    vector<int> Tree1 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int> Tree2 = {3,4,-1,-1,5,-1,-1};

    idx = -1;
    Node* Tree = BinaryTree(Tree1);

    idx = -1;
    Node* subTree = BinaryTree(Tree2);

    if(isSubTree(Tree, subTree)){
        cout << "is SubTree" << endl;
    }else{
        cout << "Not SubTree" << endl;
    }
    return 0;
}