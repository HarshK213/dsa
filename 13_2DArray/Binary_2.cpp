#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch(vector<vector<int>> & mat,int key){
    // m -> row, n-> column
    int m = mat.size() -1, n = mat[0].size()-1;
    if(key < mat[0][0])return false;
    if(key > mat[m][n]) return false;
    
    int r = 0,c = n;
    while(c>=0 && r<=m){
        if(key == mat[r][c]){
            cout << "[" << r <<","<< c <<"]"<< endl;
            return true;
        }
        else if(key < mat[r][c]) c--;
        else r++;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,18},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    
    cout << BinarySearch(matrix,21) << endl;
    
    return 0;
}