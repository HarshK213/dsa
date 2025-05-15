#include <iostream>
#include <list>
using namespace std;

int main(){

    /*
        vector is implemented as a dynamic array ,
        but

        List can be view as a double linked list 
        we can push and pop the value from both front and end sides.        


        we cant perform random access in list
        eg. lst[3]          -> this will give us error.
    */

    list<int> lst = {1,2,3,4,5,6,7,8,9,10};
    lst.push_front(0);
    lst.pop_front();
    lst.push_back(0);
    lst.pop_back();

    for(int i : lst)cout << i << endl;

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