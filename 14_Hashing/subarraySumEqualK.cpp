#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


int brute(vector<int> mat, int tar){
    int count = 0;
    int n = mat.size();
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += mat[j];
            if(sum == tar)count++;
        }
    }
    return count;
}


int optimal(vector<int> mat ,int tar){
    int n = mat.size();
    vector<int> PS(n,0);
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=mat[i];
        PS[i] = sum;
    }
    // for(int i : PS) cout << i << " ";

    unordered_map<int,int> map;
    int count = 0;
    for(int j = 0;j<n;j++){
        if(PS[j] == tar)count++;

        int key = PS[j] - tar;
        if(map.find(key) != map.end()){
            count += map[key];
        }

        if(map.find(PS[j]) == map.end())map[PS[j]] = 0;
        
        map[PS[j]]++;
    }



    return count;
}

int main(){

    vector<int> vec = {9,4,0,20,3,10,5}; 
    int ans = optimal(vec,33);
    cout << ans << endl;


    return 0;
}