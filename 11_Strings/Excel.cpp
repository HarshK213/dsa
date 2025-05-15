#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int titleToNumber(string col){
    int ans = 0;
    int n = col.length()-1;
    for(int i=n; i>=0; i--){
        ans += ((col[i]%'A' +1) * pow(26,(n-i)));
        cout << ans << endl;
    }

    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << titleToNumber(s) << endl;
    return 0;
}