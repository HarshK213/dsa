// only possible for directed acyclic graph (DAG).
#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int v){
            this->V = v;
            l = new list<int> [v];
        }

        void addEdge(int u,int v){
            l[u].push_back(v);
        }

        void sort(){
            stack<int> st;
            vector<bool> visited(V,false);
            for(int i = 0;i<V;i++){
                if(!visited[i]){
                    helper(i,visited,st);
                }
            }

            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }

        void helper(int src, vector<bool> &vis, stack<int> &st){
            vis[src] = true;
            for(int i : l[src]){
                if(!vis[i]){
                    helper(i,vis,st);
                }
            }
            st.push(src);
        }
};

int main(){
    Graph g(6);
    g.addEdge(5,2);
    g.addEdge(5,0);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(2,3);
    g.addEdge(3,1);

    g.sort();

    return 0;
}
