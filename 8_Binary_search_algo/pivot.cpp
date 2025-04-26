#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int>& arr){
    int s=0,e=arr.size()-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
    }
    return s;
}

int main(){
    vector<int> num = {7,9,1,2,3};
    vector<int> nums = {1,0,1,1,1,1};
    cout << pivot(nums) << endl;
    return 0;
}