#include <iostream> 
#include <vector>
using namespace std;


int search(vector<int>& A, int tar){
    int start = 0 , end = A.size()-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(A[mid] == tar) return mid;
        if(A[start] <= A[mid]){
            if(A[start] <= tar && tar <= A[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else{
            if(A[mid]<= tar && tar <= A[end]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }   
    return -1;
}


int main(){
    vector<int> vec = {4,5,6,7,0,1,2};
    int target = 2;
    cout << search(vec,target) << endl;
    return 0;
}