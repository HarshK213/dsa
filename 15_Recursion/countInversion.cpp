#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int merge(vector<int> &arr, int st, int e, int mid){
    vector<int> temp;
    int i = st,j = mid+1;
    
    int InversionCount=0;


    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;

            InversionCount+= (mid-i+1);

        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = 0; i < temp.size(); i++){
        arr[i+st] = temp[i];
    }

    return InversionCount;
}

int helper(vector<int> &arr, int st, int e){
    if(st<e){
        int mid = st+(e-st)/2;

        int LeftInversion = helper(arr,st,mid);
        int RightInversion = helper(arr,mid+1,e);

        int InversionCount = merge(arr,st,e,mid);

        return (LeftInversion + RightInversion + InversionCount);
    }

    return 0;
}

int mergeSort(vector<int>& arr){
    int Inversion = helper(arr,0,arr.size()-1);

    return Inversion;
}

int main(){
    vector<int> vec = {6,3,5,2,7};
    vector<int> vec1 = {1,3,5,10,2,6,8,9};

    cout << mergeSort(vec1) << endl;
}