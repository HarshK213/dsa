#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallest(vector<vector<int>> &matrix, int k) {
     int n = matrix.size();
     vector<int> vec;
     for(int i = 0; i<n;i++){
          for(int j = 0;j<n;j++){
               vec.push_back(matrix[i][j]);
          }
     }        
     sort(vec.begin(), vec.end());
     return vec[k-1];
}

int main(){

}