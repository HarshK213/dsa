#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

char smallest(vector<int> &arr){
     for(int i = 0;i<26;i++){
          if(arr[i])return i+'a';
     }
     return 'a';
}
string robotWithString(string s) {
     stack<char> st;
     string t = "";
     vector<int> freq(26);
     for(char i : s)freq[i-'a']++;
     for(char i: s){
          st.push(i);
          freq[i-'a']--;
          while(!st.empty() && st.top() <= smallest(freq)){
               t+= st.top();
               st.pop();
          }
     }
     while(!st.empty()){
          t+= st.top();
          st.pop();
     }
     return t;
}