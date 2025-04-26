#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int n=nums.size(), lsum=0,rsum=0;
    vector<int> leftsum(n,0);
    vector<int> rightsum(n,0);
    for(int i =1;i<n;i++){
        lsum += nums[i-1];
        leftsum[i]=lsum;
    }
    for(int i=n-2;i>=0;i--){
        rsum += nums[i+1];
        rightsum[i]=rsum;
        cout << rsum << endl;
    }
    cout << leftsum.size() << rightsum.size() << endl;
    for(int i =0;i<n;i++){
        if(leftsum[i]==rightsum[i])return i;
    }
    return -1;
}

int main(){ 
    vector<int> vec = {1,7,3,6,5,6};
    cout << pivotIndex(vec) << endl;

    return 0;
}