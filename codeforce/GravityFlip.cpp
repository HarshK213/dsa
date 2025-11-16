#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}