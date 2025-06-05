#include <iostream>
#include <vector>
using namespace std;

int dfs(int src, int dest, vector<vector<int>> &arr, vector<int> &dp){
     if(src == dest)return 1;
     if(dp[src] !=-1)return dp[src];
     int count = 0;
     for(int i: arr[src]){
          count+= dfs(i, dest, arr, dp);
     }
     return dp[src] = count;
}
int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
     // Code here
     vector<vector<int>> arr(V);
     for(int i =0;i<edges.size();i++){
          int a = edges[i][0];
          int b = edges[i][1];
          arr[a].push_back(b);
     }
     vector<int> dp(1001,-1);
     return dfs(src, dest, arr, dp);
}