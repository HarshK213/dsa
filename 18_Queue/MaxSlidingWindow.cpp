#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> MaxSlidingWindow(vector<int>& arr, int k){
    vector<int> ans;
    deque<int> dq;
    for(int i = 0; i<k; i++){
        while(dq.size()>0 && arr[dq.back()] <= arr[i])dq.pop_back();
        dq.push_back(i);
    }

    for(int i = k; i<arr.size();i++){
        ans.push_back(arr[dq.front()]);

        //removing elements which are not from currWindow.
        while(dq.size() > 0 && dq.front()<=i-k)dq.pop_front();

        // removing all the smaller elements.
        while(dq.size()>0 && arr[dq.back()] <= arr[i])dq.pop_back();

        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);

    return ans;
}

int main(){
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    vector<int> ans = MaxSlidingWindow(arr,3);
    for(int i : ans)cout << i << ' ';
    cout << endl;
    return 0;
}