// Here we are going o detect cycle in a Directed Graph
#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int v){
            this->V = v;
            l = new list<int>[v];
        }

        void AddEdges(int u, int v){
            l[u].push_back(v);
        }

        bool haveCycleDFS(int src){
            vector<bool> visited(V, false);
            vector<bool> RecPath(V, false);
            return helper(src, visited, RecPath);
        }

        bool helper(int src, vector<bool> &vis, vector<bool> &path){
            vis[src] = true;
            path[src] = true;
            for(int i: l[src]){
                if(!vis[i]){
                    if(helper(i,vis,path))return true;
                }else if(path[i]){
                    return true;
                }
            }
            path[src] = false;
            return false;
        }
};

int main(){
    Graph g(4);
    g.AddEdges(1,0);
    g.AddEdges(0,2);
    g.AddEdges(3,0);
    g.AddEdges(2,3);

    cout << (g.haveCycleDFS(0)?"Have Cycle":"No Cycle") << endl;
    return 0;
}
