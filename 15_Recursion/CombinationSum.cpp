#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

set<vector<int>> s;

void helper(vector<int>& arr, int tar, int i, vector<int> &comb, vector<vector<int>> &ans){

    //Base Cases
    if(i == arr.size() || tar<0)return;
    if(tar == 0){
        if(s.find(comb) == s.end()){
            ans.push_back({comb});
            s.insert(comb);
        }
        return;
    }

    //Recursion & Backtracking
    comb.push_back(arr[i]);
    helper(arr,tar-arr[i],i+1,comb,ans);       //-> Single Include
    helper(arr,tar-arr[i],i,comb,ans);         //-> Multiple Include
    
    comb.pop_back();
    helper(arr,tar,i+1,comb,ans);               //-> Exclude

}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> comb;
    helper(arr,target,0,comb,ans);
    return ans;
}

int main(){

    vector<int> arr = {2,3,5};
    vector<vector<int>> ans = combinationSum(arr,8);
    for(vector<int> i : ans){
        for(int j:i)cout << j << " ";
        cout << endl;
    }

    return 0;
}