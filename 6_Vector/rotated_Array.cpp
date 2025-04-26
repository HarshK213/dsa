#include <iostream>
#include <vector>
using namespace std;

void RotateArray(vector<int>& arr,int k){
    vector<int> temp(arr.size());
    for(int i =0;i<arr.size();i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    // now we copy temp into arr
    arr = temp;
}

int main(){
    vector<int> vec ={1,2,3,4,5,6,7,8,9};
    RotateArray(vec,3);
    for(int i:vec)cout << i << " ";
    return 0;
}