#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


// this is brute force approach with O(n^2);
vector<int> brute(vector<int> &arr, int tar){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int first = arr[i];
        for(int j=i+1;j<n;j++){
            int sec = arr[j];
            int sum = first + sec;
            if(sum == tar) return {i,j};
        }
    }
    return {-1,-1};
}



// this is better approach with O(nlogn);
vector<int> better(vector<int> &arr, int tar){
    vector<int> arr1  = arr;
    sort(arr1.begin(),arr1.end());
    int s = 0, e = arr1.size()-1;
    while(s<e){
        int sum  = arr1[s]+arr1[e];
        if(sum == tar){
            int i = find(arr.begin(), arr.end(), arr1[s]) - arr.begin();
            int j = find(arr.begin(), arr.end(), arr1[e]) - arr.begin();
            return {i,j};
        }else if(sum > tar) e--;
        else s++;
    }
    return {-1,-1};
}



// this is Most Optimal approach using unordered map with O(n);
vector<int> Optimal(vector<int> &arr, int tar){
    unordered_map<int,int> m;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int first = arr[i];
        int sec = tar - first;
        
        if(m.find(sec) != m.end()){
            return {m[sec],i};
        }
        m[first] = i; 
    }
    return {-1,-1};
}

int main(){
    vector<int> arr = {5,2,11,7,15};
    int tar = 9;

    vector<int> ans = Optimal(arr,tar);
    for(int i: ans) cout << i << " ";
    cout << endl;
    return 0;
}