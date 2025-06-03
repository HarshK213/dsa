#include <iostream>
#include <queue>
#include <map>
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

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};
        queue<pair<TreeNode*,int>> q;
        map<int,int> m;

        q.push({root,0});

        while(!q.empty()){
            TreeNode* curr = q.front().first;
            int currRightDist = q.front().second;
            q.pop();

            if(m.find(currRightDist) == m.end()){
                m[currRightDist] = curr->val;
            }

            if(curr->right != NULL)q.push({curr->right, currRightDist+1});
            if(curr->left != NULL)q.push({curr->left, currRightDist+1});
        }

        vector<int> ans;
        for(auto i:m){
          ans.push_back(i.second);
        }
        return ans;
    }
};