#include <iostream>
#include <string>
using namespace std;

int helper(string& s, int k){
     int n = s.length(), i=0, j=0, res = 0, disCnt = 0;
     int arr[26] = {0};
     while(j<n){
          if(arr[s[j]-'a'] == 0)disCnt++;
          arr[s[j]-'a']++;
          while(disCnt > k){
               arr[s[i]-'a']--;
               if(arr[s[i]-'a'] == 0)disCnt--;
               i++;
          }
          res+= j-i+1;
          j++;
     }
     return res;
}

int countSubstr(string& s, int k) {
     // code here.
     return helper(s,k) - helper(s,k-1);
}