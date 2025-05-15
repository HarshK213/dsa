#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr, int st, int e){
    int idx = st-1;
    for(int j = st; j < e; j++){
        if(arr[j] <= arr[e]){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[idx],arr[e]);
    return idx;
}

void helper(vector<int> &arr,int st, int e){
    if(st<e){
        int pivotIdx = partition(arr,st,e);
        helper(arr,st,pivotIdx-1);      // Left Partition
        helper(arr,pivotIdx+1,e);       // Right Partition      
    }
}

void QuickSort(vector<int> &arr){
    helper(arr,0,arr.size()-1);
}

int main(){

    vector<int> vec = {2,1,5,6,3,7,4};
    
    for(int i:vec)cout << i << " ";
    cout << endl;

    QuickSort(vec);

    for(int i:vec)cout << i << " ";
    cout << endl;

    return 0;
}