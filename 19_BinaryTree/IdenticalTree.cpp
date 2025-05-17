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

int main(){
    vector<int> Tree1 = {1,2,-1,-1,3,-1,-1};
    vector<int> Tree2 = {1,2,-1,-1,1,-1,-1};

    idx = -1;
    Node* root1 = BinaryTree(Tree1);

    idx = -1;
    Node* root2 = BinaryTree(Tree2);

    if(isIdentical(root1, root2)){
        cout << "Both Tree are Identical" << endl;
    }else{
        cout << "Trees are not Identical" << endl;
    }
    return 0;
}