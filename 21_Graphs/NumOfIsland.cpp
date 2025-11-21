#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int v){
            this->V = v;
            l = new list<int> [v];
        }

        void addEgdges(int u,int v){
            l[u].push_back(v);
            l[v].push_back(u);
        }
};

class Solution{
    public:
        int numIslands(vector<vector<char>> &grid){
            int ans = 0;
            int n = grid.size();
            int m = grid[0].size();

            vector<vector<bool>> vis(n,vector<bool>(m,false));

            for(int i = 0;i<n;i++){
                for(int j = 0;j<m;j++){
                    if(grid[i][j] == '1' && !vis[i][j]){
                        dfs(i,j,vis,grid,n,m);
                        ans++;
                    }
                }
            }

            return ans;
        }

        void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>> &grid, int n, int m){
            if(i<0 || i>=n || j<0 || j>=m || vis[i][j] || (grid[i][j] != '1'))return;

            vis[i][j] = true;

            dfs(i-1,j,vis,grid,n,m);    // up
            dfs(i+1,j,vis,grid,n,m);    // down
            dfs(i,j-1,vis,grid,n,m);    // left
            dfs(i,j+1,vis,grid,n,m);    // right
        }
};
