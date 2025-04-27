#include <string>
#include <iostream>
using namespace std;

int main(){

        /*
            Always be inside double quotes "".
            it is dynamic -> can be changed at run time.

            can perform :-
                Concatenation.
                Comparision(on basis of lexicographical order.)

            
            to take multiple line input, here also we use getline function.
        */
    
    string str = "hello World!";
    cout << str << endl;

    string str1 ;
    getline(cin, str1);
    cout << str1 << endl;

    return 0;
}