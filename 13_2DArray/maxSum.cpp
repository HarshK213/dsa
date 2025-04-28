#include <iostream>
using namespace std;

int maxrowsum(int mat[][3],int row,int col){
    int ans = 0;
    for(int i = 0;i<row ;i++){
        int rowsum = 0;
        for(int j=0;j<col;j++){
            rowsum += mat[i][j];
        }

        if(rowsum>ans) ans = rowsum;
    }
    return ans;
}

int maxcolsum(int mat[][3],int row,int col){
    int ans =0;
    for(int i =0;i<col;i++){
        int colsum =0;
        for(int j=0;j<row;j++){
            colsum  += mat[j][i];
        }

        if(ans < colsum) ans = colsum;
    }
    return ans;
}

int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int row = 3;
    int col = 3;

    cout << maxrowsum(matrix,row,col) << endl;
    cout << maxcolsum(matrix,row,col) << endl;

    return 0;
}