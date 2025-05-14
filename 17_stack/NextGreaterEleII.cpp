#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> NextGreaterEle(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n,0);
    stack<int> s;
    for(int i = 2*n-1 ; i>=0;i--){
        while(s.size()>0 && arr[s.top()]<=arr[i%n])s.pop();
        ans[i%n] = s.empty() ? -1 : arr[s.top()] ;
        s.push(i%n);
    }
    return ans;
}

int main(){
    vector<int> vec = {6,8,0,1,3};
    vector<int> ans = NextGreaterEle(vec);
    for(int i: ans)cout << i << " ";
    cout << endl;
    return 0;
}