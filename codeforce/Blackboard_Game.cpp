#include <iostream>
#include <vector>
using namespace std;

bool solve(int n){
     vector<bool> visited(n,false);
     for(int i = 0;i<n;i++){
          for(int j = i+1;j<n;j++){
               if(!visited[i] && !visited[j] && (i+j-3)%4 == 0){
                    visited[i] = true;
                    visited[j] = true;
               }
          }
     }
     for(bool i : visited){
          if(!i)return false;
     }
     return true;
}

int main(){
     int t,n;
     cin >> t;
     for(int i = 0;i<t;i++){
          cin >> n;
          cout << (solve(n)?"Bob":"Alice") << endl;
     }
     return 0;
}