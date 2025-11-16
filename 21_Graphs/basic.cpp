#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;              // this is number of vertices;
    list<int> *l;

    public:
        Graph(int v){
            this->V = v;
            l = new list<int>[v];
        }

        void addEdges(int u, int v){
            l[u].push_back(v);
            l[v].push_back(u);
        }

        void printNeighbour(){
            for(int i = 0;i<V;i++){
                cout << i << " : ";
                for(int j : l[i]){
                    cout << j << " ";
                }
                cout << endl;
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

    g.printNeighbour();

    return 0;
}