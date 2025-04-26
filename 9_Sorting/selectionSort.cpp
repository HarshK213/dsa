#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity:
    Best Case : O(n^2)
    Average Case : O(n^2)
    Worst Case : O(n^2)


Space Complexity : O(1)
*/

/*
Outer Loop Count:
    0> 4,2,8,1,83,2,9       i=0
    1> 1,2,8,4,83,2,9       i=1
    2> 1,2,8,4,83,2,9       i=2
    3> 1,2,2,4,83,8,9       i=3
    4> 1,2,2,4,83,8,9       i=4
    5> 1,2,2,4,8,83,9       i=5
    6> 1,2,2,4,8,9,83       i=6

*/


vector<int> selection(vector<int>& arr){
    int n = arr.size();
    for(int i =0;i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex]) minIndex = j;      // change arr[j] > arr[minIndex] , to sort in descending order.
        }
        swap(arr[minIndex],arr[i]);
    }
    return arr;
}

int main(){
    vector<int> vec = {4,2,8,1,83,2,9};
    vector<int> sortvec = selection(vec);
    for(int i: sortvec){
        cout << i << " ";
    }
    return 0;
}