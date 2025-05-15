#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int arr[5] = {5,2,3,7,1};
    sort(arr,arr+5);                    // sort in ascending order.
    for(int i : arr)cout << i << " ";

    cout << endl;

    sort(arr,arr+5,greater<int>());     // sort in reverse order
    for(int i : arr)cout << i << " ";

    cout << endl;



    vector<int> vec = {6,3,1,3,8,10};
    sort(vec.begin(),vec.end());                    // sort in ascending order.
    for(int i : vec)cout << i << " ";

    cout << endl;

    sort(vec.begin(),vec.end(),greater<int>());     // sort in reverse order
    for(int i : vec)cout << i << " ";

    cout << endl;



    return 0;
}