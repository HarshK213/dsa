#include <iostream>
using namespace std;

long long minCuttingCost(int n, int m, int k) {
     if(n<=k && m<=k)return 0;
     
     long long cost = 0;
     while(n>k && n>0 && k>0){
          cost += k*(n-k);
          n = n-k;
          cout << cost << endl;
     }
     while(m>k && m>0 && k>0){
          cost += k*(m-k);
          m = m-k;
          cout << cost << endl;
     }
     return cost;
}

int main(){
     cout << minCuttingCost(6,5,5) << endl;
     return 0;
}