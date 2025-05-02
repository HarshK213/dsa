#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// 3loops approach
vector<vector<int>> brute(vector<int> mat){
    vector<vector<int>> ans;
    int n = mat.size();

    set<vector<int>> s;

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(mat[i]+mat[j]+mat[k] == 0){

                    vector<int> trip = {mat[i],mat[j],mat[k]};
                    sort(trip.begin(),trip.end());
                    if(s.find(trip) == s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }

                }
            }
        }
    }
    return ans;
}

// hashing apporach
vector<vector<int>> better(vector<int> mat){
    int n = mat.size();
    
    set<vector<int>> uniTri;
    
    for(int i = 0;i<n;i++){
        int tar = -mat[i];
        set<int> s;
        for(int j=i+1;j<n;j++){
            int third = tar - mat[j];
            if(s.find(third) != s.end()){
                vector<int> trip = {mat[i] , mat[j], third};
                sort(trip.begin(),trip.end());
                uniTri.insert(trip);
            }
            s.insert(mat[j]); 
        }
    }
    vector<vector<int>> ans(uniTri.begin(), uniTri.end());
    return ans;

}

//2pointer approach
vector<vector<int>> optimal(vector<int> mat){
    vector<vector<int>> ans;
    int n = mat.size();
    
    sort(mat.begin(),mat.end());
    for(int i = 0;i<n;i++){

        if(i>0 && mat[i] == mat[i-1])continue;

        int j = i+1, k = n-1;
        while(j<k){
            int sum = mat[i] + mat[j] + mat[k];
            if(0 == sum){
                ans.push_back({mat[i],mat[j],mat[k]});
                j++;k--;

                while(j<k && mat[j] == mat[j-1])j++;

            }else if(0 < sum){
                k--;
            }else{
                j++;
            }
        }
    }
    return ans;
}


int main(){
    vector<int> mat = {-1,0,1,2,-1,-4};
    // vector<vector<int>> ans = brute(mat);
    // vector<vector<int>> ans = better(mat);
    vector<vector<int>> ans = optimal(mat);
    for(int i = 0 ;i<ans.size();i++){
        for(int j = 0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}