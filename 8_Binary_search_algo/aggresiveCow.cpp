#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector<int>& arr, int n , int mid){
    sort(arr.begin(),arr.end());
    int cowNo = 1, lastPos = arr[0];
    for(int i = 1; i<arr.size();i++){
        if((arr[i]-lastPos) >= mid){
            cowNo++;
            lastPos = arr[i];
        }
        if(cowNo == n)break;
    }
    if(cowNo<n)return false;

    return true;
}

int aggresiveCow(vector<int>& arr,int n){
    int max = *max_element(arr.begin(),arr.end());
    int min = *min_element(arr.begin(),arr.end());
    int s = 1, e = max - min, ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(ispossible(arr,n,mid)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
    } 
    return ans;
}


int main(){
    vector<int> vec = {1,2,8,4,9};
    int m = 3;
    cout << aggresiveCow(vec,m) << endl;
    return 0;
}