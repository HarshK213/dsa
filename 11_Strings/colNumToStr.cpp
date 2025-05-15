#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToTitle(int columnNumber) {
    string ans = "";
    
    while(columnNumber > 0){
        int lastDig = (columnNumber -1)%26;
        char lastChar = lastDig + 'A';
        columnNumber = (columnNumber -1)/26;
        // cout << lastChar << endl;
        ans += lastChar;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}


int main(){
    int num = 701;
    cout << convertToTitle(num) << endl;
    // cout << titleToNumber("ZZ") << endl;
    // cout << (27%26) << endl;
    return 0;
}