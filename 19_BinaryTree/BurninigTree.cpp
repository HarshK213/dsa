#include <iostream>
#include <map>
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

class Solution{
     public:
          Node* createParentMapping(Node* root, map<Node*, Node*> &nodeToParent, int tar){
               Node* tarNode = nullptr;
               queue<Node*> q;
               q.push(root);
               while(!q.empty()){
                    Node* top = q.front();
                    q.pop();
                    if(top->val == tar){
                         tarNode = top;
                    }
                    if(top->left){
                         nodeToParent[top->left] = top;
                         q.push(top->left);
                    }
                    if(top->right){
                         nodeToParent[top->right] = top;
                         q.push(top->right);
                    }
               }
               return tarNode;
          }

          void burnTree(Node* tarNode, map<Node*, Node*> nodeToParent, int &time){
               map<Node*, bool> visited;
               queue<Node*> q;
               q.push(tarNode);
               visited[tarNode] = true;
               while(!q.empty()){
                    // Node* top = q.front();
                    // q.pop();
                    
                    // Node* p = nodeToParent[top];
                    // Node* l = top->left;
                    // Node* r = top->right;

                    // if(!mp[p])q.push(p);
                    // if(!mp[l])q.push(l);
                    // if(!mp[r])q.push(r);

                    // if(q.size()>0)time++;

                    int size = q.size();
                    bool flag = 0;
                    for(int i = 0;i<size;i++){
                         Node* top = q.front();
                         q.pop();

                         Node* p = nodeToParent[top];
                         if(p && !visited[p]){
                              flag = 1;
                              q.push(p);
                              visited[p] = true;
                         }

                         if(top->left && !visited[top->left]){
                              flag = 1;
                              q.push(top->left);
                              visited[top->left] = true;
                         }

                         if(top->right && !visited[top->right]){
                              flag = 1;
                              q.push(top->right);
                              visited[top->right] = true;
                         }
                    }
                    if(flag){
                         time++;
                    }
               }               
          }

          int minTime(Node* root, int tar){
               int time = 0;
               map<Node*, Node*> nodeToParent;
               Node* tarNode = createParentMapping(root, nodeToParent, tar);
               burnTree(tarNode, nodeToParent, time);
               return time;
          }
};