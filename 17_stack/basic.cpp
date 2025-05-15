#include <iostream>
#include <vector>
#include <list>
using namespace std;

// this is the stack implimentation using vector

// class Stack{
//     vector<int>v;
//     // int top = -1;
// public:
//     void push(int val){
//         v.push_back(val);
//     }

//     int top(){
//         return v[v.size()-1];
//     }

//     void pop(){
//         v.pop_back();
//     }

//     bool empty(){
//         if(v.size() == 0)return true;
//         return false;
//     }
// };

class Stack{
    list<int> ll;
public:
    void push(int val){
        ll.push_front(val);
    }
    int top(){
        return ll.front();
    }
    void pop(){
        ll.pop_front();
    }
    bool empty(){
        return ll.size() == 0;
    }
};  

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


    return 0;
}