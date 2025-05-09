#include <iostream>
#include <math.h>
using namespace std;

int getDiv(int n){
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) count++;  // perfect square → count only once
            else count += 2;           // count both divisors
        }
    }
    return count;
}

int bulbSwitch(int n) {
    // int count = 0;
    // for(int i = 1 ;i<=n; i++){
    //     if(getDiv(i)%2 == 1)count++;
    // }
    return (int)sqrt(n);
}

int main(){
    int n;
    cin >> n;
    cout << bulbSwitch(n) << endl;

    return 0;
}