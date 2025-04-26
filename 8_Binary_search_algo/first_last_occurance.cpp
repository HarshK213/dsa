#include <iostream>
#include <vector>
using namespace std;

int foccurance(vector<int>& vec,int size,int target){
    int s = 0,e = size-1, ans = -1;
    while(s<=e){
        int mid = s+((e-s)/2);
        if(vec[mid]==target){
            ans= mid;
            e = mid-1;
        }else if(vec[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
};

int loccurance(vector<int>& vec,int size,int target){
    int s = 0,e = size-1, ans = -1;
    while(s<=e){
        int mid = s+((e-s)/2);
        if(vec[mid]==target){
            ans= mid;
            s = mid+1;
        }else if(vec[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
};

int main(){
    vector<int> vec = {0,0,0,1,2,2,2,2,3,4,5,5};
    int i;
    cin >> i;
    cout << foccurance(vec,12,i) << " " << loccurance(vec,12,i) << endl;
    cout << "Total number of Occurance :" << loccurance(vec,12,i) - foccurance(vec,12,i) + 1 << endl;
    return 0;
}