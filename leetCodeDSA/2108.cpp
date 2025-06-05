#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string firstPalindrome(vector<string>& words) {
     for(string i: words){
          string rev = i;
          reverse(rev.begin(),rev.end());
          if(i == rev){
               return i;
          }
     }   
     return "";
}