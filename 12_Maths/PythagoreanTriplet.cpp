#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;


bool pt(vector<int>& arr){
     int n = arr.size();
     int mele = 0;
     for(int i:arr)mele = max(mele,i);

     vector<bool> vis(mele+1,false);

     for(int i =0 ;i<n;i++){
          vis[arr[i]]= true;
     }

     for(int i = 1;i<=mele;i++){
          if(!vis[i])continue;
          for(int j= 1;j<=mele;j++){
               if(!vis[j])continue;
               int c = sqrt(i*i + j*j);
               if(c*c != i*i +j*j || c>mele)continue;
               if(vis[c])return true;
          }
     }
     return false;
}
int main(){
     vector<int> arr = {1,3,4,5,6};
     cout << pt(arr) << endl;

     return 0;
}