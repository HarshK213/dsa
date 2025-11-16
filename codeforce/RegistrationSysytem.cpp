#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void helper(string s, unordered_map<string,int> &um){
    if(um.find(s) == um.end()){
        cout << "OK" << endl;
        um[s] = 1;
    }else{
        string newS = s+to_string(um[s]);
        um[s]++;
        um[newS] = 1;
        cout << newS << endl;
    }
}

int main(){
    int n;
    cin >> n;
    unordered_map<string,int> um;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        helper(s,um);
    }
    return 0;
}