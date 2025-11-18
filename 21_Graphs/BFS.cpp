#include <iostream>
#include <vector>
#include <queue>
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

        void addEdges(int u, int v){
            l[u].push_back(v);
            l[v].push_back(u);
        }

        // BFS Traversal

        void BFS(){
            vector<bool> vec(V,false);
            queue<int> q;
            q.push(0);
            vec[0]=true;
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                cout << curr << " ";
                for(int i : l[curr]){
                    if(!vec[i]){
                        vec[i] = true;
                        q.push(i);
                    }
                }
            }
        }
};

int main(){
    Graph g(5);

    g.addEdges(0,1);
    g.addEdges(2,1);
    g.addEdges(3,1);
    g.addEdges(2,3);
    g.addEdges(2,4);

g.BFS();

    return 0;
}