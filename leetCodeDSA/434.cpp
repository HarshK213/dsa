#include <iostream>
#include <string>
using namespace std;

int countSegments(string s) {
     int count = 0;
     for(int i = 0; i < s.length(); i++) {
          if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')) {
               count++;
          }
     }
     return count;
}