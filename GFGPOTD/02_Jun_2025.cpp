#include <iostream>
#include <vector>
using namespace std;


/*

Method 1 : Using resursion

     TC : O(2^(m*n));

void helper(vector<vector<int>> &grid, vector<string> &ans, string path, int currR, int currC){
     int n = grid.size();
     int m = grid[0].size();
     if(currR < 0 || currR >= n || currC < 0 || currC >= m || grid[currR][currC] == 1 || grid[currR][currC] == -1)return;
     if(currR == n-1 && currC == m-1){
          ans.push_back(path);
          return;
     }
     
     grid[currR][currC] = -1;
     
     // helper(grid, ans, path+'U', currR-1, currC);
     helper(grid, ans, path+'D', currR+1, currC);
     helper(grid, ans, path+'R', currR, currC+1);
     // helper(grid, ans, path+'L', currR, currC-1);
     
     grid[currR][currC] = 0;
}

int uniquePaths(vector<vector<int>> &grid) {
     // code here
     vector<string> ans;
     string path = "";
     helper(grid, ans, path, 0, 0);
         for(string path:ans){
        cout << path << endl;
    }

     return ans.size();
}
*/



/*
Method 2 : Using DP

     TC : O(m*n)
*/

int uniquePaths(vector<vector<int>> &grid) {
     int n = grid.size(), m = grid[0].size();
     vector<vector<int>> dp(n, vector<int>(m, 0));
     
     // Starting point
     if(grid[0][0] == 1) return 0;
     dp[0][0] = 1;
     
     for(int i = 0; i < n; ++i){
          for(int j = 0; j < m; ++j){
               if(grid[i][j] == 1) continue;
               if(i > 0) dp[i][j] += dp[i-1][j];
               if(j > 0) dp[i][j] += dp[i][j-1];
          }
     }
     
     return dp[n-1][m-1];
}

int main(){
    vector<vector<int>> mat = {{0,1,0,1,0,0},{0,0,0,0,0,0},{1,1,0,0,1,0}};
    int ans = uniquePaths(mat);
     cout << ans << endl;
    return 0;
}