#include <iostream>
#include <string>
using namespace std;

int titleToNumber(string col) {
    int ans = 0;
    
    for(char i : col){
        ans = ans*26 + (i%'A'+1);
    }

    return ans;
}

int main(){

    string s = "ABB";
    cout << titleToNumber(s) << endl;
    return 0;
}