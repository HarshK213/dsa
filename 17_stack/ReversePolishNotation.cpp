#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int evalRPN(vector<string>& arr) {
     stack<int> s;
     for(int i = 0; i<arr.size(); i++){
         if(arr[i] == "+" || arr[i] == "*" || arr[i] == "/"){
             int num1 = s.top();
             s.pop();
             int num2 = s.top();
             s.pop();

             if(arr[i] == "+")s.push(num1+num2);
             else if(arr[i] == "*")s.push(num1*num2);
             else if(arr[i] == "/")s.push(num2/num1);
         }else{
             s.push(stoi(arr[i]));
         }
         cout << s.top() << endl;
     }
     return s.top();
}

int main(){
     vector<string> arr = {"4","13","5","/","+"};
     cout << evalRPN(arr) << endl;
     return 0;
}