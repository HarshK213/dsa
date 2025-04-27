#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void RemoveAllOccurrences(string &s,string &part){
    while(s.length() > 0 && (s.find(part) < s.length())){
        int index = s.find(part);
        s.erase(index,part.length());
    }
}

int main(){
    // cout << "HELLO WORLD" << endl;
    string s = "daabcbaabcbc";
    string part = "abc";
    RemoveAllOccurrences(s,part);
    cout << s << endl;


    return 0;
}