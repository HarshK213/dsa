#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
     int n = matrix.size();
     vector<vector<int>> duplicate(n,vector<int>(n,0));

     for(int i=0;i<n;i++){
          for(int j = 0;j<n;j++){
               duplicate[j][n-i-1] = matrix[i][j];
         }
     }

     matrix = duplicate;
}