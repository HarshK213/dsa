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

        // BFS Traversal - without source node

        void BFS1(){
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

        // BFS Traversal - with source node

        void BFS2(int sc){
            vector<bool> vec(V,false);
            helper(sc,vec);
        }

        void helper(int sc, vector<bool> vec){
            queue<int> q;
            q.push(sc);
            vec[sc] = true;
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                cout << curr << " ";
                for(int i: l[sc]){
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

    g.BFS1();
    g.BFS2(0);

    return 0;
}
