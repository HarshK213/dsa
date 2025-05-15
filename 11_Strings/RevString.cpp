#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str  = "Hello World!";
    
    // int len = str.length()-1;
    // for(int i = 0;i<len/2;i++){
    //     swap(str[i],str[len - i]);
    //     cout << str << endl;
    // }

    // int s = 0, e = str.length() -1;
    // while(s<e){
    //     swap(str[s],str[e]);
    //     s++;
    //     e--;
    // }

    reverse(str.begin() , str.end());
    cout << str << endl;

    return 0;
}