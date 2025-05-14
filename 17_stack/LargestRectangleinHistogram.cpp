#include <iostream>
#include <vector>
#include <stack>
using namespace std;


vector<int> rightSmallest(vector<int>& arr){
    
    return ans;
}

vector<int> leftSmallest(vector<int>& arr){
    stack<int> s;
    vector<int> ans(arr.size(),0);
    for(int i = 0;i<arr.size();i++){
        while(s.size()>0 && arr[s.top()]>=arr[i])s.pop();
        if(s.empty()) ans[i] = 0;
        else ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> l(n,0);
    vector<int> r(n,0);
    stack<int> s;
    
    for(int i = n-1;i>=0;i--){
        while(s.size()>0 && heights[s.top()]>=heights[i])s.pop();
        if(s.empty()) r[i] = heights.size();
        else r[i] = s.top();
        s.push(heights[i]);
    }

    while(!s.empty())s.pop();

    for(int i = 0;i<heights.size();i++){
        while(s.size()>0 && heights[s.top()]>=heights[i])s.pop();
        if(s.empty()) l[i] = -1;
        else l[i] = s.top();
        s.push(heights[i]);
    }

    int ans = 0;
    for(int i = 0;i<heights.size() ;i++){
        int width = r[i] - l[i] -1;
        int area = heights[i] * width;
        ans = max(area,ans);
    }
    return ans;
}

int main(){
    vector<int> vec = {2,4};
    cout << largestRectangleArea(vec) << endl;
    return 0;
}