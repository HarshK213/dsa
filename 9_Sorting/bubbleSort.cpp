#include <iostream>
#include <vector>
using namespace std;

/*
Space Complexity : O(1)

Time Complexity : 
        Best Case : O(n)
        Average Case : O(n^2)
        Worst Case : O(n^2)

*/

// Here , we use bool swapped to optimize the code, if the array is already sorted the outer loop will only run once.


vector<int> bubble(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j = 0;j<n-(i+1);j++){
            if(arr[j]>arr[j+1]){                // change arr[j] < arr[j+1] , to sort in descending order.
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swapped)break;
    }
    return arr;
}

int main(){
    vector<int> vec = {4,2,8,1,83,2,9};
    vector<int> sortvec = bubble(vec);
    for(int i: sortvec){
        cout << i << " ";
    }
    return 0;
}