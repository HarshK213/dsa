#include <iostream>
#include <vector>
#include <list>
#include <queue>
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


    // Detect Cycle using DFS
    bool haveCycleDFS(int sc){
        vector<bool> visited(V, false);
        return helperDFS(sc,visited,-1);
    }

    bool helperDFS(int sc, vector<bool> &vec, int parent){
        vec[sc] = true;
        for(int i : l[sc]){
            if(!vec[i]){
                if(helperDFS(i,vec,sc))return true;
            }else{
                if(i != parent){
                    return true;
                }
            }
        }
        return false;
    }

    // Detect Cycle Using BFS

    bool haveCycleBFS(int sc){
        vector<bool> visited(V,false);
        return helperBFS(sc,visited);
    }

    bool helperBFS(int sc,vector<bool> vec){
        queue<pair<int,int>> q;
        q.push({sc,-1});
        vec[sc] = true;
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            for(int i : l[curr.first]){
                if(!vec[i]){
                    q.push({i,curr.first});
                    vec[i] = true;
                }else if(vec[i] && i!=curr.second){
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
    // g.addEdges(1,2);
    g.addEdges(3,4);

    cout << (g.haveCycleDFS(0)?"Have Cycle":"Not Have Cycle") << endl;

    cout << (g.haveCycleBFS(0)?"Have Cycle":"Not Have Cycle") << endl;

    return 0;
}
