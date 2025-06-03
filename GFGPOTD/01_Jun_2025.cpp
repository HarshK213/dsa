#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        unordered_set<int> us;
        int n= mat1.size();
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                us.insert(mat2[i][j]);
            }
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                int sec = x - mat1[i][j];
                if(us.find(sec) != us.end()){
                    ans++;
                }
            }
        }
        return ans;
    }
};