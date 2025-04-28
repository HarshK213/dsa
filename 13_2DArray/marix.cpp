#include <iostream>
#include <vector>
using namespace std;

// For Performing Linear Search
int LinearSearch(int mat[][3],int row,int col, int key){
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(mat[i][j] == key)return true;
        }
    }
    return false;
}

int main(){

    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}} ;
    int row = 4;
    int col = 3;

    for(int i = 0;i<row ;i++){
        for(int j = 0 ;j<col;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << LinearSearch(matrix,row,col,19) << endl;


    return 0;
}