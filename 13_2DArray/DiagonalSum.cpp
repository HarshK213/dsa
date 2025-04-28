#include <iostream>
using namespace std;

int primary_sum(int mat[][4],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += mat[i][i];
    }
    return sum;
}

int seconday_sum(int mat[][4],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(i != n-1-i) sum += mat[i][n-1-i];
    }
    return sum;
}

int main(){
    int matrix[4][4] = {{11,2,3,4},{5,6,6,8},{9,10,11,12},{13,14,15,16}} ;
    int row = 4;
    int col = 4;

    // cout << "Primary : " << primary_sum(matrix, row) << endl;
    // cout << "Secondary : " << seconday_sum(matrix, row) << endl;

    cout << "TOTAL DIAGONAL SUM  : " << primary_sum(matrix,row) + seconday_sum(matrix,row) << endl;


}