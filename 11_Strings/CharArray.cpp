 #include <iostream>
 using namespace std;

 int main(){
    // Character Array
    // char str[] = {'a','b','c','\0'}; // -> str[] = 'abc';
    // cout << str << endl; // -> abc
    /*
        \0 is a null character.
        this null character make a character array a valid string. 
        when we calculate the string length using the strlen() function it will ignore the null character. and give us 3.
    */
     
    char str1[100];
    // cin >> str1;
        /*
            when we take input like this and we want more that one word, it can't be done using this.    
        */

    cin.getline(str1,100);
        /*
            using this cin.getline funciton we can take multiple words input and can also define the delimiter.
        */
    cout << str1 << endl;

    
    
    
    return 0;
 }