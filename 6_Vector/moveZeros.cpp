#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
     int j = 0;
     for(int i = 0 ;i < nums.size();i++){
         if(nums[i] != 0){
             nums[j] = nums[i];
             j++;
         }
     }
     for(int i = j; i < nums.size() ; i++){
         nums[i] = 0;
     }
}

int main(){
     vector<int> vec ={0,1,0,3,12};
     moveZeroes(vec);
     for(int i:vec)cout << i << " ";
     cout << endl;
     return 0;
 }
