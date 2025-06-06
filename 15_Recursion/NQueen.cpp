#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n){
    // Horizontal Check
    for(int j = 0; j < n; j++){
        if(board[row][j] == 'Q')return false;
    }

    // Vertical Check
    for(int i = 0; i < n; i++){
        if(board[i][col] == 'Q')return false;
    }

    // Diagonal left
    for(int i = row, j = col; i>=0, j>=0; i--, j--){
        if(board[i][j] == 'Q')return false;
    }

    // Diagonal Right
    for(int i = row, j = col; i>=0, j<n; i--, j++){
        if(board[i][j] == 'Q')return false;
    }

    return true;
}

void nQueen(vector<string> &board, int row, int n, vector<vector<string>> &ans){
    //base case
    if(row==n){
        ans.push_back({board});
        return;
    }


    //middle case
    for(int col=0; col<n; col++){
        if(isSafe(board,row,col,n)){
            board[row][col] = 'Q';
            nQueen(board, row+1, n, ans);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveQueen(int n){
    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));
    nQueen(board,0,n,ans);
    return ans;
}

int main(){

    
    cout << "Hello" << endl;

    return 0;
}