#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int rain(vector<int> &arr){
    int n = arr.size();
    vector<int> lMax(n,0);
    vector<int> rMax(n,0);

    int l=0;
    for(int i = 0;i<n;i++){
        if(i==0 || i==n-1){
            lMax[i]=0;
            l=arr[i];
        }else{
            l=max(l,arr[i]);
            lMax[i] = l;
        }
    }
    for(int i : lMax)cout << i << ' ';
    cout << endl;

    int r = 0;
    for(int i = n-1;i>=0;i--){
        if(i==0 || i==n-1){
            rMax[i] = 0;
            r=arr[i];
        }else{
            r=max(r,arr[i]);
            rMax[i] = r;
        }
    }
    for(int i : rMax)cout << i << " ";
    cout << endl;

    int rain = 0;
    for(int i = 0;i<n;i++){
        if(i==0 || i == n-1)continue;
        rain += (min(lMax[i],rMax[i]) - arr[i]);
    }
    return rain;
}

int rain_optimal(vector<int> &arr){
    int n = arr.size();
    int l= 0,r = n-1, lMax = 0,rMax = 0;
    int rain = 0;
    while(l<r){
        lMax = max(lMax,arr[l]);
        rMax = max(rMax,arr[r]);
        if(lMax<rMax){
            rain += lMax-arr[l];
            l++;
        }else{
            rain += rMax - arr[r];
            r--;
        }
    }
    return rain;
}

int main(){

    vector<int> vec = {4,2,0,3,2,5};
    cout << rain_optimal(vec) << endl;
    return 0;
}