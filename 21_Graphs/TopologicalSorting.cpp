// only possible for directed acyclic graph (DAG).
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
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

        void sortDFS(){
            stack<int> st;
            vector<bool> visited(V,false);
            for(int i = 0;i<V;i++){
                if(!visited[i]){
                    helperDFS(i,visited,st);
                }
            }

            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }

        void helperDFS(int src, vector<bool> &vis, stack<int> &st){
            vis[src] = true;
            for(int i : l[src]){
                if(!vis[i]){
                    helperDFS(i,vis,st);
                }
            }
            st.push(src);
        }


        // also known as Kahn's Algorithm`
        void sortBFS(){
            /*
                steps:
                    1. calculate indegree for all nodes
                    2. push all nodes with indegree 0 in a queue
                    3. perform some operation and return answer
            */

            vector<int> indegree = calIndegree();
            vector<int> sortedOrder;
            queue<int> q;

            for(int i = 0;i<V;i++){
                if(indegree[i] == 0)q.push(i);
            }

            while(!q.empty()){
                int curr = q.front();
                sortedOrder.push_back(curr);
                q.pop();

                for(int neighbour: l[curr]){
                    indegree[neighbour]--;
                    if(indegree[neighbour] == 0){
                        q.push(neighbour);
                    }
                }
            }

            for(int i: sortedOrder){
                cout << i << " ";
            }
            cout << endl;
        }

        vector<int> calIndegree(){
            vector<int> indree(V,0);
            for(int i = 0;i<V;i++){
                for(int j:l[i]){
                    indree[j]++;
                }
            }
            return indree;
        }
};

int main(){
    Graph g(6);
    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,2);

    g.sortDFS();
    g.sortBFS();

    return 0;
}
