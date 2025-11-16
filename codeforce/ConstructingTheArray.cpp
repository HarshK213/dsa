#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;

void printArr(vector<int> arr){
    for(int i:arr){
        cout << i << " ";
    }
    cout << endl;
}

// pair<int,int> subarr(vector<int> arr, int n){
//     pair<int,int> ans = {-1,-1};
//     int maxL = INT_MIN, currL = 0, l = -1, r = -1;
    
//     for(int i = n-1;i>=0;i--){
//         if(arr[i] == 0){
//             r = max(r,i);
//             l = i;
//             currL++;
//         }else{
//             l = -1,r = -1;
//             currL = 0;
//         }
//         if(currL >= maxL){
//             ans= {l+1,r+1};
//             maxL = currL;
//         }
//     }
//     return ans;
// }

// vector<int> helper(int n){
//     vector<int> arr(n,0);
//     int curr = 1;
//     while(curr<= n){
//         pair<int,int> endpoints = subarr(arr,n);
//         // cout << endpoints.first << " "<< endpoints.second << endl;
//         int l = endpoints.first, r = endpoints.second;
//         if((r-l+1)%2 == 1){
//             arr[((l+r)/2)-1] = curr;
//         }else{
//             arr[((l+r-1)/2)-1] = curr;
//         }
//         curr++;
//     }
//     return arr;
// }


vector<int> helper1(int n){
    vector<int> ans(n,0);

    priority_queue<pair<int,pair<int,int>>> pq;
    pq.push({n,{-1,-n}});
    int curr = 1;

    while(!pq.empty()){
        int l = -pq.top().second.first, r = -pq.top().second.second;
        pq.pop();

        int mid = (r+l)/2;
        ans[mid-1] = curr++;

        if(l==r)continue;

        if(l<mid){
            pq.push({mid-l,{-l,-(mid-1)}});
        }
        if(mid<r){
            pq.push({r-mid,{-(mid+1),-r}});
        }
    }
    
    return ans;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        // vector<int> ans  = helper(n);
        // printArr(ans);

        vector<int> arr = helper1(n);
        printArr(arr);

    }
    return 0;
}