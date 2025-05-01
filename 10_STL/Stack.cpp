#include <iostream> 
#include <stack>
using namespace std;

int main(){
    /*
        it is a LIFO structure.
    */
   stack<int> s;

   s.push(1);
   s.push(2);
   s.push(3);

//    s.empty();
   
//    s.emplace(4);

//    s.pop();

//    s.size();

//    s.top;

while (!s.empty()){
    cout << s.top() << endl;
    s.pop();
}

    stack<int> s1;

    s1.swap(s);
    /*
        after this s is now empty and s1 have all elements of s.
    */





    return 0;
}