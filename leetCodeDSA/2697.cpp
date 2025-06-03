#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int st = 0, e = s.length()-1;
        while(st<e){
            if(s[st] != s[e]){
                if(s[st] - 'a' < s[e] - 'a')s[e] = s[st];
                else s[st] = s[e];
            }
            st++;
            e--;
        }
        return s;
    }
};