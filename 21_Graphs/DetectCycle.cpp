#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }

    void addEdges(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool haveCycle(int sc){
        vector<bool> visited(V, false);
        return helper(sc,visited,-1);
    }

    bool helper(int sc, vector<bool> &vec, int parent){
        vec[sc] = true;
        for(int i : l[sc]){
            if(!vec[i]){
                if(helper(i,vec,sc))return true;
            }else{
                if(i != parent){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g(5);

    g.addEdges(0,1);
    g.addEdges(0,2);
    g.addEdges(0,3);
    g.addEdges(1,2);
    g.addEdges(3,4);

    cout << (g.haveCycle(0)?"Have Cycle":"Not Have Cycle") << endl;
    return 0;
}
