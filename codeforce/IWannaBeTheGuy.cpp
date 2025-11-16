#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n, n1, n2, max=0;
    cin >> n;
    cin >> n1;
    set<int> s;
    for(int i = 0; i < n1; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> n2;
    for(int i = 0; i < n2  ; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == n){
        cout << "I become the guy." << endl;
    }else{
    cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}