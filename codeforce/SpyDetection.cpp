#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        unordered_map<int,int> um;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            arr[i] = x;
            um[x]++;
        }

        int spy;

        for(auto i : um){
            if(i.second == 1){
                spy = i.first;
            }
        }

        for(int i = 0;i<n;i++){
            if(arr[i] == spy){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}