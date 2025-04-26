#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>& vec, int target){
    int n = vec.size();
    int start = 0;
    int end = n-1;
    while(start <= end){
        // int mid = (start+end)/2;    //to prevent the condition of overflow we use different formula to calculte mid.
        int mid = start + ((end-start)/2);
        if(vec[mid]==target){
            return mid;
        }else if(vec[mid]<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;

}



int bs_recursion(vector<int>& vec,int target, int start, int end){
   if(start<=end){
     int mid = start + (end-start)/2;
    if(vec[mid] < target){
        return bs_recursion(vec,target,mid+1,end);
    }else if(vec[mid] > target){
        return bs_recursion(vec,target,start,mid-1);
    }else{
        return mid;
    }
   }
   return -1;
}

int main(){
    vector<int> vec = {-1,0,3,4,5,9,12};
    int target = 12;
    // cout << binary_search(vec,target) << endl;               // TC -> O(log n)       SC -> O(1)
    cout << bs_recursion(vec,target,0,vec.size()-1) << endl;    // TC -> O(log n)       SC -> O(log n)



    return 0;
}