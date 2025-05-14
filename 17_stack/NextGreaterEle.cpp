#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> NextGreaterEle(vector<int>& arr){
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n,0);
    for(int i = n-1;i>=0;i--){
        
        while(s.size() > 0 && s.top() <= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
        }
        cout << ans.at(1) << endl;
    return ans;
}

int main(){
    vector<int> vec = {6,8,0,1,3};
    vector<int> ans = NextGreaterEle(vec);
    for(int i: ans)cout << i << " ";
    cout << endl;
    return 0;
}