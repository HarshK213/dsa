#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <string>
using namespace std;

unordered_map<string,int> s;
unordered_map<string , string> rev;

bool selfP(string str){
     int st = 0, e = str.length()-1;
     while(st<e){
          if(str[st] != str[e])return false;
          st++;
          e--;
     }
     return true;
}

bool revPresent(string str, int idx){
     string ori = str;
     int st = 0, e = str.length()-1 ;
     while(st<e){
          swap(str[st],str[e]);
          st++;
          e--;
     }
     // cout << str << endl;
     if(s.find(str) != s.end() && s[str] > idx){
          rev[ori] = str;
          return true;    
     }
     return false;
}

int longestPalindrome(vector<string>& words) {

     for(int i = 0;i<words.size();i++){
          s[words[i]] = i;
     }

     // for (const auto& pair : s) {
     // cout << pair.first << " " << pair.second << endl;
     // }

     // for(int i = 0; i< words.size() ;i++){
     //      if(selfP(words[i])){
     //           cout  << "SELF : "<< words[i] << endl;
     //      }else if(revPresent(words[i],i)){
     //           cout << "rev :" << words[i] << endl;
     //      } ;
     // }

     int n = words.size();
     vector<bool> selfp(n,false);
     vector<bool> revpresent(n,false);
     for(int i = 0;i<words.size();i++){
          if(selfP(words[i])){
               selfp[i] = true;
          }else if(revPresent(words[i],i)){
               revpresent[i] = true;
          }
     }

     // for(string i:words)cout << i << " ";
     // cout << endl;
     // for(bool i: selfp) cout << i << " ";
     // cout << endl;
     // for(bool i: revpresent) cout << i << " ";
     // cout << endl;

     stack<string> stac;
     string ans = "";
     for(int i = 0;i<words.size();i++){
          if(revpresent[i]){
               stac.push(rev[words[i]]);
               ans= ans+words[i];
          }
     }
     for(int i = 0;i<words.size();i++){
          if(selfp[i]){
               ans= ans+words[i];
               break;
          }
     }
     while(!stac.empty()){
          ans = ans + stac.top();
          stac.pop();
     }
     cout << ans << endl;

     return ans.length();
}

int main(){
     vector<string> arr = {"lc","cl","gg"};
     // vector<string> arr = {"ab","ty","yt","lc","cl","ab"};
     // vector<string> arr = {"cc","ll","xx"};
     longestPalindrome(arr);
}