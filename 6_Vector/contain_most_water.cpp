#include <iostream>
#include <vector>
using namespace std;

int max_water_brute(vector<int>& vec){
    int max_vol =0;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            int cur_vol = (j-i)*min(vec[i],vec[j]);
            max_vol = max(max_vol,cur_vol);
        }
    }
    return max_vol;
}

int max_water_optimal(vector<int>& vec){
    int max_vol = 0;
    int left=0;
    int right = vec.size() -1;
    while(left<right){
        int cur_vol = (right-left)*min(vec[right],vec[left]);
        max_vol = max(max_vol,cur_vol);
        if(vec[left]<vec[right]){
            left++;
        }else{right--;}
    }
    return max_vol;
}

int main(){

    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    // cout << "Max Volume : "<< max_water_brute(vec) << endl;
    cout << "Max Volume : "<< max_water_optimal(vec) << endl;


    return 0;
}