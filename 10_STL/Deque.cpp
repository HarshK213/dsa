#include <iostream>
#include <deque>
using namespace std;

int main(){

    /*
        deque is also like the list 

        it is implemented as a dynamic array.

        it allow us to use the random access(dq[3].)
    */

    deque<int> dq= {1,2,3,4,5};

    dq.push_front(0);
    dq.push_back(0);

    dq.pop_front();
    dq.pop_back();

    dq.emplace_front(0);
    dq.emplace_back(0);

    for(int i:dq)cout << i << endl;

    /*
        size()
        erase()
        clear()
        begin()
        end()
        rbegin()
        rend()
        insert()
        front()
        back()
    */


    return 0;
}