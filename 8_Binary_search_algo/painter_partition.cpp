#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int>& arr,int m,int mid){
    int NoOfPainter = 1, time =0;
    for(int i = 0;i<arr.size();i++){
        if(time+arr[i] <= mid){
            time+=arr[i];
        }else{
            NoOfPainter++;
            if(NoOfPainter>m || arr[i]>mid) return false;
            time = arr[i];
        }
    }
    return true;
}

// m : Number of Painters 

int painterPartition(vector<int>& arr,int m){
    int s = 0;
    int ans = -1, e=0;
    
    for(int i:arr){
        if(i>s)s = i;
        e+=i;
    }
    while(s<=e){
        int mid = s+(e-s)/2;
        if(ispossible(arr,m,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {40,30,10,20};
    cout << painterPartition(vec,2) << endl;
    return 0;
}