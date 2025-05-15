#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAlphanumeric(char x){
    if((x >= '0' && x <='9') || (tolower(x) >= 'a' && tolower(x) <= 'z'))return true;
    return false;
}

bool isPalindrome(string s){
    
    int st = 0 , e = s.length()-1;
    while(st<e){
        if(!isAlphanumeric(s[st])){
                st++;
                continue;
            }
        if(!isAlphanumeric(s[e])){
            e--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[e])) return false;
        st++;
        e--;
    }
    return true;
}

int main(){

    /*

    Q. For normal words.

        string str ;
        getline(cin,str);
        
        string rev = str;
        reverse(str.begin(), str.end());
        if(str == rev)cout << "Palindrome" << endl;
        else cout << "NOT Palindrome" << endl;
    */

    /*
    Q. For valid Palindrome.
    */
   if(isPalindrome("Hw%llH"))cout << "Palindrome" << endl;
   else cout << "NOT Palindrome" << endl;

     
    
    return 0;
}