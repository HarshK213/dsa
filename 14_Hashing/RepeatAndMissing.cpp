#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> RepeatAndMiss(vector<vector<int>> &mat){
    // let a -> repeated, b-> missing

    unordered_set<int> s;
    int n = mat.size();
    int a,b;
    int actualSum =0, expectedSum =0;


    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){

            actualSum += mat[i][j];

            if(s.find(mat[i][j]) != s.end()){
                a = mat[i][j];
            }

            s.insert(mat[i][j]);

        }
    }

    expectedSum = ((n*n) * (n*n +1))/2;
    b = expectedSum + a -actualSum;
    return {a,b};

}

int main(){
    vector<vector<int>> mat = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = RepeatAndMiss(mat);
    for(int i: ans) cout << i << " ";

    cout << endl;

    return 0;
}