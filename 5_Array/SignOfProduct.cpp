#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int>& nums) {
    int negC = 0;
    for(int i : nums){
        if(i==0)return 0;
        if(i<0)negC++;
    }
    if(negC%2==1)return -1;
    return 1;
}