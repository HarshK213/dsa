#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = status.size();
        long long ans = 0;
        queue<int> q;
        vector<bool> visited(n,false);
        for(int i: initialBoxes){
            if(status[i] == 1)q.push(i);
            else visited[i] = true;

            while(!q.empty()){
                int box = q.front();
                q.pop();
                ans+= candies[box];

                for(int j: containedBoxes[box]){
                    if(status[j] == 1){
                        q.push(j);
                        status[j] = 0;
                    }else{
                        visited[j] = true;
                    }
                }
                for(int j : keys[box]){
                    if(visited[j] && status[j] == 0)q.push(j);
                    status[j] = 1;
                }
            }
        }
        return ans;
    }