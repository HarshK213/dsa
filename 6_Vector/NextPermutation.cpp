#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int>& arr,int s, int e){
    while(s<=e)swap(arr[s++],arr[e--]);
}
void nextPermutation(vector<int>& nums) {
    
    // Finding Pivot Point
    int p = -1 , l = nums.size()-1;
    for(int i = l-1;i>=0;i--){
        if(nums[i]<nums[i+1]){
            p = i;
            break;
        }
    }

    // if Pivot is still -1 , then the arrangement is not possible then we reverse the nums array.
    if(p == -1){
        reverse(nums,0,l);
        return;
    }

    // if Pivot point exist, then we find the right most element whose value is greater then p.
    for(int i = l;i>p;i--){
        if(nums[i]>nums[p]){
            swap(nums[p],nums[i]);
            break;
        }
    }
    // Now when we have swapped the value, we will now reverse the array from p+1 to l.
    reverse(nums,p+1,l);
}

int main(){
    vector<int> vec = {1,2,3};
    nextPermutation(vec);
    for(int i:vec){
        cout << i << " ";
    }
}