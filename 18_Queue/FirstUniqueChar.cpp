#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

int FirstUniqueChar(string s){
    queue<int> q;
    unordered_map<char,int> m;
    for(int i = 0; i<s.length(); i++){
        if(m.find(s[i]) == m.end())q.push(i);
        m[s[i]]++;
        while(q.size()>0 && m[s[q.front()]] > 1)q.pop();
    }
    int ans = q.empty()?-1:q.front();
    return ans;
}

int main(){
    string s = "levelec";
    cout << FirstUniqueChar(s) << endl;
    return 0;
}
