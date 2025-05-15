#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;
    int i = start, j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k = 0; k<temp.size(); k++){
        arr[k+start] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int st, int e){
    if(st<e){
        int mid = st+(e-st)/2;
        mergeSort(arr,st,mid);      // Left Part
        mergeSort(arr,mid+1,e);     // Right Part

        merge(arr,st,mid,e);
    }
}

int main(){

    vector<int> vec = {12,31,35,8,17,32};
    for(int i:vec)cout << i << " ";
    cout << endl;
    mergeSort(vec,0,vec.size()-1);
    for(int i:vec)cout << i << " ";
    cout << endl;

    return 0;
}