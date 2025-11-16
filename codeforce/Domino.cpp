#include <iostream>
#include <vector>
using namespace std;

int helper(vector<pair<int,int>> vec, int n){
    int topsum=0,lowsum=0,mixParityIdx = -1;
    for(int i = 0;i<n;i++){
        topsum+=vec[i].first;
        lowsum+=vec[i].second;
        if(vec[i].first %2 != vec[i].second%2){
            mixParityIdx = i;
        }
    }
    if(topsum%2 == 0 && lowsum%2 == 0)return 0;
    else if(topsum%2 == 1 && lowsum%2 == 1){
        if(mixParityIdx == -1)return -1;
        else return 1;    
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> vec;
    for(int i = 0;i<n;i++){
        int x,y;
        cin >> x >> y;
        vec.push_back({x,y});
    }
    cout << helper(vec,n) << endl;
    return 0;
}