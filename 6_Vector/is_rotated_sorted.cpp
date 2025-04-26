#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool isSorted(vector<int>& arr,int k){
//     for(int i=0;i<k-1;i++){
//         if(arr[i+1] < arr[i]) return false;
//     }
//     for(int i =k;i<arr.size()-2;i++){
//         if(arr[i+1] < arr[i]) return false;
//     }
//     return true;
// }

// bool isRotated(vector<int>& arr,int k){
//     vector<int> temp = arr;
//     sort(temp.begin(),temp.end());
//     for(int i = 0;i<arr.size();i++){
//         if(arr[(i+k)/arr.size()] != temp[i]) return false;
//     }
//     return true;
// }

bool check(vector<int>& arr){
    int count = 0, n = arr.size();
    for(int i =0;i<n-1;i++){
        if(arr[i+1] < arr[i])count++;
    }
    if(arr[0]<arr[n-1])count++;
    return count <= 1;
}

int main(){
    vector<int> vec = {7,8,9,1,2,3,10,5,6};
    if(check(vec)) cout << "Is Rotated and Sorted" << endl;
    else cout << "is not " << endl;
    return 0;
}