#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// int brute_force(vector<int>& vec){
//     int n = vec.size();
//     for(int i = 0; i<n;i++){
//         int count = 1;
//         for(int j=0;j<n;j++){
//             if(vec[i] == vec[j]){
//                 count++;
//             }
//         }
//         if(count > (n/2)){
//             return vec[i];
//         }
//     }
//     return 0;
// }

int optimal(vector<int>& vec){
    int n = vec.size();
    
    
    
    sort(vec.begin(),vec.end());
    
    
    
    int count = 1, ans = vec[0];
    for(int i = 0; i<n-1; i++){
        if(vec[i]==vec[i+1]){
            count++;
        }else{
            count = 1, ans=vec[i];
        }
        if(count > (n/2)){
            return ans;
        }
    }
    return 0;
}



int Moore(vector<int> vec){
     int count =0 , ans = 0;
     for(int i= 0;i<vec.size();i++){
        if(count ==0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            count++;
        }else{
            count--;
        }
     }

    // When it is given that it is not possible that every case has a majority element.

    //  int fre=0;
    //  for(int i: vec){
    //     if(i == ans){
    //         fre++;
    //     }
    //  }
    //  if(fre <= (vec.size()/2)){
    //     ans = -1;
    //  };

    return ans;
}




int main(){
    vector<int> num = {1,2,3,4,5,6};
    cout << Moore(num);




    return 0;
}