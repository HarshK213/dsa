#include <iostream>
#include <string>
#include <stack>
using namespace std;

string minRemoveToMakeValid(string s){
     stack<int> st;
     for(int i = 0; i<s.length(); i++){
          if(s[i] == '(')st.push(i);
          if(s[i] == ')'){
               if(!st.empty() && s[st.top()] == '(')st.pop();
               else st.push(i);
          }
     }
     while(!st.empty()){
          s.erase(st.top(), 1);
          st.pop();
     }
     return s;
}

int main(){
     string s = "))((";
     // string s = "lee(t(c)o)de)";
     string ans = minRemoveToMakeValid(s);
     cout  << '"' << ans << '"' << endl;
     return 0;
}