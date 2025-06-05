#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string answerString(string word, int numFriends) {
     if(numFriends == 1)return word;

     int n = word.length();
     int maxLen = n - numFriends + 1;
     string ans = "";
     
     for(int i = 0; i<n; i++){
          ans = max(ans, word.substr(i,maxLen));
     }

     return ans;
}