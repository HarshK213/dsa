 #include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums){
    int start = 1, end = nums.size()-2;     // st and end can't be the corner value so we set st as 1 and end as n-2;
    while(start<= end){
        int mid = start + (end-start)/2;
        if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]) return mid;
        if(nums[mid]>nums[mid+1]){
            end = mid-1;
        }
        if(nums[mid]>nums[mid-1]){
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {2,3,9,21,5,3,2,0};
    int i = search(vec);
    cout << "Index : "<< i << "\nElement : " << vec[i] << endl;


    return 0;
}