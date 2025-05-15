#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &mat){
    int m = mat.size(); // m -> row
    int n = mat[0].size() ; // n-> column

    vector<int> ans;

    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    
    while(srow <= erow && scol <= ecol){
        // top
            for(int i = scol;i<=ecol;i++){
                ans.push_back(mat[srow][i]);
            }
        
        // right 
            for(int i = srow+1;i<=erow;i++){
                ans.push_back(mat[i][ecol]);
            }

        // bottom 
            for(int i = ecol-1;i>= scol;i--){
                if(srow == erow) break;
                ans.push_back(mat[erow][i]);
            }

        // left
            for(int i = erow -1;i>= srow+1;i--){
                if(scol == ecol) break;
                ans.push_back(mat[i][scol]);
            }

        // shrinking the area
            scol++;srow++;
            ecol--;erow--;
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,18},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    vector<int> ans = spiralOrder(matrix);

    for(int i : ans)cout << i << " ";
    cout << endl;
    return 0;
}