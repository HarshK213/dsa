#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string revWord(string s){
    string ans = "";
    int n = s.length();
    reverse(s.begin(),s.end());
    for(int i = 0;i< n;i++){
        string word = "";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        if(word.length() > 0){
            reverse(word.begin(),word.end());
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main(){
    string str =  "HELLO WORLD";
    cout << revWord(str) << endl;
    return 0;
}