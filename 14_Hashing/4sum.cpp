#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> optimal(vector<int> &mat , int tar){
    vector<vector<int>> ans;
    int n = mat.size();

    sort(mat.begin(),mat.end());

    for(int i = 0;i<n;i++){
        
        if(i>0 && mat[i] == mat[i-1])continue;
        
        
        for(int j = i+1;j<n ;){
        
            int k = j+1,l= n-1;

            while(k<l){
                int sum = mat[i] + mat[j] + mat[k] + mat[l];
                if(sum == 0){
                    ans.push_back({mat[i], mat[j], mat[k], mat[l]});
                    k++;l--;
                    while(k<l && mat[k] == mat[k-1])k++;
                }else if(sum < 0){
                    k++;
                }else{
                    l--;
                }
            }

            j++;
            while(j<n && mat[j] == mat[j-1]) j++;

        }

    }
    return ans;
}



int main(){
    vector<int> vec = {-2,-1,-1,1,1,2,2};
    vector<vector<int>> ans = optimal(vec,0);

    for(vector<int> i : ans){
        for(int j: i){
            cout << j << " " ;
        }
        cout << endl;
    }

    return 0;
}