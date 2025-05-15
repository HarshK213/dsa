#include <iostream>
#include <set>
using namespace std;

int main(){

/*  SET     */
    /*
        set store the unique value in a sorted order.
        internally it is implemented as a tree

        therefore the functions like insert erase count have TC of O(log n).
    */

    /*
        s.insert(value);
        s.emplace(value);
        s.count(value);
        s.erase(value);
        s.find(value);
        s.size();
        s.empty();
        s.lower_bound();
    */

    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(3);

    for(int i :s)cout << i << endl;
    /*
    output :
        1
        2
        3
        4
        5
    */


/*
    similarly we have MULTISET and UNORDERED SET
    , just like multimap and unordered map
*/



    return 0;
}