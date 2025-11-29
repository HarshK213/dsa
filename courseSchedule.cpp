#include <iostream>
#include <vector>
using namespace std;

// class Graph{
//     int V;
//     list<int> *l;
    
//     public:
//         Graph(int v){
//             this->V = v;
//             l = new list<int>[v];
//         }
        
//         void addEdge(int u,int v){
//             l[u].push_back(v);
//         }
// };

class Solution{
    public:
        bool canFinish(int n, vector<vector<int>> edges){
            vector<bool> visited(n, false);
            vector<bool> recPath(n, false);
            
            for(int i = 0;i<n;i++){
                if(!visited[i]){
                    if(helper(i, visited, recPath, edges)){
                        return false;
                    }
                }
            }
            return true;
        }
        
        bool helper(int src, vector<bool> &vis, vector<bool> &path, vector<vector<int>> &edges){
            vis[src] = true;
            path[src] = true;
            
            for(int i = 0;i<edges.size();i++){
                int u = edges[i][1];
                int v = edges[i][0];
                
                if(u == src){
                    if(!vis[src]){
                        if(helper(v,vis,path,edges))return true;
                    }else if(path[v]){
                        return true;
                    }
                }
            }
            path[src] = false;
            return false;
        }
};

int main(){
    Solution s;
    return 0;
}