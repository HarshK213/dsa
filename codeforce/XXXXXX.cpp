#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int helper(vector<int> arr, int x , int n){
    int sum = 0;
    for(int i : arr)sum+=i;
    if(sum%x != 0)return n;
    
    int st = n-1, e = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]%x != 0){
            st = min(st,i);
            e = max(e,i);
        }
    }
    if(st == n-1 && e == 0)return -1;
    return (n-min(st+1,n-e));
}

int main(){
    int t;
    cin >> t;

    for(int i = 0;i<t;i++){
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        cout << helper(arr,x,n) << endl;
    }
    return 0;
}