#include <iostream>
#include <set>
using namespace std;

int sumofSq(int n){
    int ans = 0;
    while(n>0){
        int lastDig = n%10;
        n=n/10;
        ans += lastDig*lastDig;
    }
    cout << ans << endl;
    return ans;
}
bool isHappy(int n) {
    set<int> s;
    
    while(s.find(n) == s.end()){
        cout<< "HE" << endl;
        s.insert(n);
        n= sumofSq(n);

        if(n==1)return true;
    }
    return false;
}

int main(){
    int n = 19;
    cout << isHappy(n) << endl;

    return 0;
}