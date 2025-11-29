#include <iostream>
#include <list>
#include <vector>
#include <stack>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int v){
            this->V = v;
            l = new list<int>[V];
        }

        void addEdge(int u,int v){
            l[u].push_back(v);
        }
};

class Solution{
    public:

        bool haveCycle(int src, vector<vector<int>> &order, vector<bool> &vis, vector<bool>& path){
            vis[src] = true;
            path[src] = true;

            for(int i = 0;i<order.size();i++){
                int u = order[i][1];
                int v = order[i][0];

                if(u==src){
                    if(!vis[v]){
                        if(haveCycle(v,order,vis,path))return true;
                    }else if(path[v]){
                        return true;
                    }
                }
            }
            path[src] = false;
            return false;
        }

        void TopologicalSort(int src, vector<bool> &vis, stack<int> &st, vector<vector<int>> &order){
            vis[src] = true;
            for(int i = 0;i<order.size();i++){
                int u = order[i][1];
                int v = order[i][0];
                if(u==src){
                    if(!vis[v]){
                        TopologicalSort(v,vis,st,order);
                    }
                }
            }
            st.push(src);
        }

        vector<int> findOrder(int n, vector<vector<int>>& order) {
            vector<bool> visited(n, false);
            vector<bool> path(n, false);
            vector<int> ans;

            for(int i=0;i<n;i++){
                if(!visited[i]){
                    if(haveCycle(i,order,visited,path))return ans;
                }
            }

            stack<int> st;
            visited.assign(n,false);
            for(int i = 0;i<n;i++){
                if(!visited[i]){
                    TopologicalSort(i,visited,st,order);
                }
            }

            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            return ans;
        }
};
