#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>> &vec, int n)
{
     int lastN = vec.size();
     vector<int> currN(n, 1);
     for (int i = 1; i < lastN; i++)
     {
          currN[i] = vec[lastN-1][i - 1] + vec[lastN - 1][i];
     }
     vec.push_back(currN);
}

vector<vector<int>> generate(int numRows)
{
     if (numRows == 1)
          return {{1}};
     if (numRows == 2)
          return {{1}, {1, 1}};
     vector<vector<int>> ans = {{1}, {1, 1}};
     for (int i = 2; i < numRows; i++)
     {
          cout << "before solve is called" << endl;
          solve(ans, i+1);
     }
     return ans;
}

int main(){
     int n; 
     cin >> n;
     vector<vector<int>> ans = generate(n);
     for(int i = 0; i< ans.size();i++){
          for(int j = 0;j < ans[i].size();j++){
               cout << ans[i][j] << " ";
          }
          cout << endl;
     }
     return 0;
}