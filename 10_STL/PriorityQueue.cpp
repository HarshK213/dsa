#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(1);

    cout << q.top() << endl;

    /*
        q.push(4)   -> log(n)
        q.pop()     -> log(n)
        q.top()     -> 1
        q.size()
        q.empty()
    */

    //  FOR REVERSE ORDER PRIORITY QUEUE
    priority_queue<int,vector<int>,greater<int>> q1;
    q1.push(5);
    q1.push(3);
    q1.push(1);

    cout << q1.top() << endl;



    return 0;
}