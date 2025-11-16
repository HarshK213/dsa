#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n,l,n1;
    cin >> n >> l;
    n1 = n;
    vector<double> arr;
    while(n1--){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());


    double gap = 0;
    for(int i = 0;i<n-1;i++){
        gap = max(gap, (arr[i+1]-arr[i]));
    }
    double maxGap=gap/2;
    double st = arr[0], e = n=l-arr[n-1];

    cout << fixed << setprecision(10) << max(maxGap,max(st,e)) << endl;
    return 0;
}