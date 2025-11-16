#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool helper(int x, int y, int z){
    if(!(x==y || y==z || x==z)){
        return false;
    }
    if((x == y  && z<=x) || (x==z && y<=x) || (y==z && x<=z)){
        return true;
    }
    return false;
}

vector<int> possible_comb(int x,int y, int z, bool pos){
    vector<int> ans(3,-1);
    if(!pos)return ans;

    if(x == y){

        ans = {x,z,max(z-1,1)};
    }else if(x==z){
        ans = {x,y,max(y-1,1)};
    }else{
        ans = {x,z,max(x-1,1)};
    }
    
    return ans;
}

int main(){
    int t;
    cin >> t;
    vector<pair<vector<int>, bool>> vec;
    for(int i = 0;i<t;i++){
        int x,y,z;
        cin >> x >> y >> z;
        bool ans = helper(x,y,z);
        vector<int> arr = possible_comb(x,y,z,ans);
        vec.push_back({arr,ans});
    }

    for(auto i : vec){
        if(i.second){
            cout << "YES" << endl;
            for(int j : i.first){
                cout << j << " ";
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}