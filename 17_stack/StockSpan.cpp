#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> StockSpan(vector<int> &arr){
    vector<int> ans(arr.size(),0);
    stack<int> s;
    for(int i = 0; i < arr.size(); i++){
        while(s.size() > 0 && arr[s.top()]<=arr[i])s.pop();
        if(s.empty()){ans[i] = i+1;}
        else{ans[i] = i-s.top();}
        s.push(i);
    }
    return ans;
}

int main(){
    vector<int> vec = {100,80,60,70,60,75,85};
    vector<int> ans = StockSpan(vec);
    for(int i : ans)cout << i << " ";
    cout << endl;

    return 0;
}