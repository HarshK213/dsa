#include <iostream>
#include <vector>
using namespace std;

vector<int> brute(vector<int> &arr, int tar){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int first = arr[i];
        for(int j=i+1;j<n;j++){
            int sec = arr[j];
            int sum = first + sec;
            if(sum == tar) return {i,j};
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> arr = {5,2,11,7,15};
    int tar = 9;
    vector<int> ans = brute(arr,tar);
    for(int i:ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}