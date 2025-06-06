#include <iostream> 
#include <string>
#include <vector>
using namespace std;

bool isSame(string &txt, string & pat, int idx){
     for(int i =0;i<pat.size();i++){
          if(txt[idx+i] != pat[i])return false;
     }
     return true;
}

vector<int> search(string &pat, string &txt) {
     // code here.
     int m = pat.size();
     int n= txt.size();
     int mod = 101;
     int base = 26;
     vector<int> ans;
     int patHash = 0;
     int txtHash = 0;
     int power = 1;
     for(int i = m-1;i>=0;i--){
          int patVal = pat[i]-'a'+1;
          int txtVal = txt[i]-'a'+1;
          patHash = (patHash + patVal*power)%mod;
          txtHash = (txtHash + txtVal*power)%mod;
          power = (power*base)%mod;
     }
     if(txtHash == patHash && isSame(txt, pat, 0)){
          ans.push_back(1);
     }
     int highestP = 1;
     for(int i =1;i<m;i++){
          highestP = (highestP*base)%mod;
     }
     for(int i = 1;i<=n-m;i++){
          int prev = txt[i-1]-'a'+1;
          txtHash = (txtHash - (prev*highestP)%mod +mod)%mod;
          txtHash =(txtHash*base)%mod;
          int next = txt[i+m-1]-'a'+1;
          txtHash = (txtHash+next)%mod;
          if(txtHash == patHash && isSame(txt, pat, i)){
               ans.push_back(i+1);
          }
     }
     return ans;
}