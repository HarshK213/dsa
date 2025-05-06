#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PS(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        cout << "[ ";
        for(int i : ans) cout << i << " ";
        cout << "]";
        cout << endl;
        return ;
    }

    ans.push_back(arr[i]);
    PS(arr,ans,i+1);
    ans.pop_back();

    int idx = i+1;
    while(idx<arr.size() && arr[idx] == arr[idx-1])idx++;

    PS(arr,ans,idx);
}

void AllSubset(vector<int>& arr){
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int i = 0;
    PS(arr,ans,i);
}

int main(){
    vector<int> arr = {1,2,2};
    AllSubset(arr);

    return 0;
}