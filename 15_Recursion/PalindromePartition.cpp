#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(string s){
    int st = 0, e = s.size()-1;
    if(st == e)return true;
    while(st<e){
        if(s[st] != s[e])return false;
        st++;e--;
    }
    return true;
}

void helper(string s, vector<string>& Partition, vector<vector<string>> &ans){

    // Base Case
    if(s.size() == 0){
        ans.push_back(Partition);
        return;
    }

    // Recursion
    int n = s.size();
    for(int i = 0; i<n; i++){
        string part = s.substr(0,i+1);
        if(isPalindrome(part)){
            Partition.push_back(part);
            helper(s.substr(i+1),Partition,ans);
            Partition.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> Partition;
    helper(s,Partition,ans);
    return ans;
}

int main(){

    vector<vector<string>> ans = partition("aab");

    for(vector<string> i: ans){
        for(string j:i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}