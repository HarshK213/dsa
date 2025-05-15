#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, int dig){
    for(int i = 0; i<9; i++){
        if(board[i][col] == dig)return false;
    }

    for(int j = 0; j<9; j++){
        if(board[row][j] == dig) return false;
    }

    int sr = (row/3)*3;
    int sc = (col/3)*3;
    for(int i = sr;i<=sr+2;i++){
        for(int j = sc;j<=sc+2;j++){
            if(board[i][j] == dig)return false;
        }
    }
    return true;
}

bool SS(vector<vector<char>>& board, int row, int col){

    // Base Case
    if(row == 9)return true;

    int nextRow = row;
    int nextCol = col+1;
    if(nextCol == 9){
        nextRow++;
        nextCol=0;
    }
    // If value already filled
    if(board[row][col] != '.'){
       return SS(board,nextRow,nextCol);
    }

    for(char dig = '1'; dig<='9'; dig++){
        if(isSafe(board, row, col, dig)){
            board[row][col] = dig;
            if(SS(board,nextRow,nextCol))return true;
            board[row][col] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    SS(board,0,0);
}

int main(){

    cout << "HELLO" << endl;

    return 0;
}