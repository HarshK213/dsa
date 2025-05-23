#include <iostream>
#include <stack>
#include <string>
using namespace std;

int calculate(string s){
     int res = 0, curr = 0, sign = 1;
     stack<int> st;
     st.push(sign);

     for (int i = 0; i < s.length(); ++i) {
          char c = s[i];

          if (isdigit(c)) {
               curr = curr * 10 + (c - '0');
          } else if (c == '+' || c == '-') {
               res += sign * curr;
               sign = st.top() * (c == '+' ? 1 : -1);
               curr = 0;
          } else if (c == '(') {
               st.push(sign);
          } else if (c == ')') {
               st.pop();
          } else if (c == ' ') {
               continue;
          }
     }

     res += sign * curr;
     return res;
}

int main(){
     string s = "(1+(4+5+2)-3)+(6+8)";
     cout << calculate(s) << endl;
     return 0;
}