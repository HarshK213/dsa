#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s){
    stack<char> st;
    if(s.size() == 0)return true;
    for(char c : s){
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
            cout << st.top() << endl;
        }else{
            if(st.size() == 0)return false;
            if(st.top() == '(' && c == ')')st.pop();
            else if(st.top() == '[' && c == ']')st.pop();
            else if(st.top() == '{' && c == '}')st.pop();
            else return false;
        }
    }
    cout << st.size() << endl;
    return (st.size() == 0);
}

int main(){
    string s = "()";
    cout << isValid(s) << endl;

    return 0;

}