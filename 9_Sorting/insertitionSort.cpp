#include <iostream>
#include <vector>
using namespace std;

/*
Complexity: O(n^2)
*/

vector<int> insertion(vector<int>& arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int curr = arr[i],prev = i-1;
        while(prev>=0 && arr[prev]> curr){      // change arr[prev] < curr , to sort in decending order
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    return arr;
}

int main(){
    vector<int> vec = {4,2,8,1,83,2,9};
    vector<int> ans = insertion(vec);
    for(int i: ans){
        cout << i << "  ";
    }
    return 0;
}