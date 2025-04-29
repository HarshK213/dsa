#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> brute(vector<int> mat, int tar){
    vector<vector<int>> ans;
    int n = mat.size();
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(mat[i]+mat[j]+mat[k] == tar){
                    ans.push_back({i,j,k});
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> mat = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = brute(mat,0);
    for(int i = 0 ;i<ans.size();i++){
        for(int j = 0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}