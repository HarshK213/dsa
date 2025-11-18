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
            l = new list<int>[v];
        }

        void addEdges(int u, int v){
            l[u].push_back(v);
            l[v].push_back(u);
        }

        // DFS Traversal -- using stack

        void DFS1(){
            vector<bool> vec(V,false);
            stack<int> st;
            vec[0] = true;
            st.push(0);
            while(!st.empty()){
                int curr = st.top();
                st.pop();
                cout << curr << " ";
                for(int i : l[curr]){
                    if(!vec[i]){
                        vec[i] = true;
                        st.push(i);
                    }
                }
            }
        }

        // DFS Traversal -- using recursion

        void DFS2(int sc){
            vector<bool> vec(V,false);
            helper(sc, vec);
        }

        void helper(int sc, vector<bool> &vec){
            cout << sc << " ";
            vec[sc] = true;

            for(int i : l[sc]){
                if(!vec[i]){
                    helper(i,vec);
                }
            }
        }
};

int main(){
    Graph g(6);

    g.addEdges(0,1);
    g.addEdges(2,1);
    g.addEdges(3,1);
    // g.addEdges(2,3);
    g.addEdges(2,4);
    g.addEdges(3,5);

    g.DFS1();
    cout << endl;
    g.DFS2(0);

    return 0;
}