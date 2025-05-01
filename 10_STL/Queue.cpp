#include <iostream> 
#include <queue>
using namespace std;

int main(){

    /*
        Queue is a FIFO structure.
    */

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
     
    /*
        q.push(4);
        q.emplace(5);
        q.pop();
        q.size();
        q.empty();
        q.swap();
    */

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
        }


    return 0;
}