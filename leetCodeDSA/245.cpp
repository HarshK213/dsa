#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string reverseVowels(string s) {
     unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
     int st = 0, e = s.length()-1;
     while(st<e){
          while(st<e && vowels.find(s[st]) == vowels.end())st++;
          while(st<e && vowels.find(s[e]) == vowels.end())e--;
          swap(s[st],s[e]);
          st++;
          e--;
     }
     return s;
}