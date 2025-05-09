#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<vector<int>> &grid, int row, int col, int n, int expVal){
    // Base Cases
    if(row <0 || row >= n || col < 0 || col >= n || grid[row][col] != expVal)return false;
    if(expVal == ((n*n)-1))return true;
    
    // Recursion & Backtracking
    bool ans1 = isValid(grid, row-2, col+1, n, expVal+1);
    bool ans2 = isValid(grid, row-1, col+2, n, expVal+1);
    bool ans3 = isValid(grid, row+1, col+2, n, expVal+1);
    bool ans4 = isValid(grid, row-2, col+1, n, expVal+1);
    bool ans5 = isValid(grid, row+2, col-1, n, expVal+1);
    bool ans6 = isValid(grid, row+1, col-2, n, expVal+1);
    bool ans7 = isValid(grid, row-1, col-2, n, expVal+1);
    bool ans8 = isValid(grid, row-2, col-1, n, expVal+1);


    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>>& grid){
    return isValid(grid,0,0,grid.size(),0);
}

int main(){
    vector<vector<int>> grid = {{0,3,6},{5,8,1},{2,7,4}};
    cout << checkValidGrid(grid) << endl;

    return 0;
}