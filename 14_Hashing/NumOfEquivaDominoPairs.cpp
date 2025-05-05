#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int numEquivDominoPairs(vector<vector<int>>& d) {
    int count = 0;
    unordered_map<int,int> um;
    for(int i = 0; i< d.size();i++){
        int hash = min(d[i][0],d[i][1])*10 + max(d[i][0],d[i][1]);
        if(um.find(hash) != um.end()){
            um[hash]++;
            count++;
        }else{
            um[hash]=1;
        }
    }
    return count; 
}

int main(){
    vector<vector<int>> vec = {{1,2},{2,1},{3,4},{5,6}};
    cout << numEquivDominoPairs(vec) << endl;


    return 0;
}