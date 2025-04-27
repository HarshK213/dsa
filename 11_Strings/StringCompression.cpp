#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int compress(vector<char>& chars){
    int n = chars.size();
    int idx = 0;
    for(int i = 0;i<n;i++){
        char ch = chars[i];
        int count = 0;
        while(i<n && chars[i]==ch){
            count++;i++;
        }
        if(count == 1)chars[idx++] = ch;
        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char j:str)chars[idx++] = j;
        }
        i--;
    }
    chars.resize(idx);
    for(char i: chars)cout<< i<< " ";
    cout << endl;
    return idx;
}

int main(){
    // cout << "HELLO WORLD" << endl;
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout << endl;
    cout << compress(chars) << endl;
    return 0;
}