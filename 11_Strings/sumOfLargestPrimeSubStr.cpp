#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <algorithm>
using namespace std;

// bool isPrime(long long n){
//      if(n<2)return false;
//      if(n==2)return true;
//      if(n==3)return true;
//      if(n==4)return false;
//      for(int i =2;i<sqrt(n);i++){
//           if(n%i == 0)return false;
//      }
//      return true;
// }

// void sum(string s){
//      set <long long> uniPrimes;
//      int n = s.length();
//      // cout << s.substr(0,10) << endl;
//      for(int i = 0;i <n;i++){
//           for(int j = 1;j<=n-i;j++){
//                string sub = s.substr(i,j);
//                // cout << j  << " = "  << sub << endl;
//                long long num = stoll(sub);
//                if(isPrime(num)){
//                     uniPrimes.insert(num);
//                     cout << num << endl;
//                }
//           }
//      }
//      vector<long long> primes(uniPrimes.begin(),uniPrimes.end());
//      // for(long long n : primes)cout << n << " ";
//      sort(primes.rbegin(), primes.rend());
//      long long sum  = 0;
//      for(int i = 0 ; i<3 && i<primes.size(); i++){
//           sum+= primes[i];
//      }
//      cout << sum << endl;
// }

int maxSubstrings(string s) {
        int n = s.length();
        vector<pair<int,int>> vp;
        
        for(int i = 0 ;i<n;++i){
            for(int j = i+3; j<n;++j){
                if(s[i] == s[j]){
                    pair<int, int> p = {i,j};
                    vp.push_back(p);
                }
            }
        }
        sort(vp.begin(), vp.end() , [](pair<int,int>&a, pair<int,int>& b){
             return a.second < b.second;
          });
          for(auto i : vp)cout << i.first << " = "<< i.second << endl;
        int count = 0, lastend = -1;
        for(int i= 0 ;i<vp.size();++i){
            if(vp[i].first >lastend){
                count++;
                lastend = vp[i].second;
            }
        }
        return count;
    }

int main(){
     // string s = "6357501617";
     // sum(s);
     // cout << isPrime(6357501617) << endl;

     string s = "abcdeafdef";
     cout << maxSubstrings(s) << endl;
     return 0;
}