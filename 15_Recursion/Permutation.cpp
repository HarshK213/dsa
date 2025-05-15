#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void GetPer(vector<int> &arr,int idx,vector<vector<int>> &ans){
    if(idx == arr.size()){
        // for(int i : arr){
        //     cout << i << " ";
        // }
        // cout << endl;
        ans.push_back(arr);
        return;
    }

    for(int i=idx;i<arr.size(); i++){
        swap(arr[idx],arr[i]);
        GetPer(arr,idx+1,ans);
        swap(arr[idx],arr[i]);
    }
}

vector<vector<int>> permute(vector<int> arr){
    vector<vector<int>> ans;
    int i = 0;
    GetPer(arr,i,ans);
    return ans;
}

int main(){

    vector<int> vec = {1,2,3};
    vector<vector<int>> ans = permute(vec);
    for(vector<int> i : ans){
        for(int j:i)cout << j << " ";
        cout << endl;
    }



    return 0;
}