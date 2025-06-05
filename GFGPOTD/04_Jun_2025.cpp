#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int dp[101][101][101];
int helper(string& s1,string &s2, string &s3, int n1, int n2, int n3){
     if(n1==0 || n2==0 || n3==0)return 0;
     
     if(dp[n1][n2][n3] != -1)return dp[n1][n2][n3];
     if(s1[n1-1] == s2[n2-1] && s2[n2-1] == s3[n3-1]){
          return dp[n1][n2][n3] = 1+helper(s1,s2,s3,n1-1,n2-1,n3-1);
     }
     return dp[n1][n2][n3] = max({
          helper(s1,s2,s3,n1-1,n2,n3),
          helper(s1,s2,s3,n1,n2-1,n3),
          helper(s1,s2,s3,n1,n2,n3-1)
     });
}
int lcsOf3(string& s1, string& s2, string& s3) {
     // Code here
     int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
     memset(dp,-1,sizeof(dp));
     return helper(s1,s2,s3,n1,n2,n3);
}