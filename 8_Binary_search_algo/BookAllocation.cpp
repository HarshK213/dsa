#include <iostream>
#include <vector>
using namespace std;

//m = number of student
//n = number of book

bool isBookAllocate(vector<int>& vec,int m,int n, int mid){
    int studentNo =1;
    int BookPage =0;
    for(int i =0;i<n;i++){
        if(BookPage + vec[i] <= mid){
            BookPage += vec[i];
        }else{
            studentNo++;
            if(studentNo>m || vec[i] > mid)return false;
            BookPage =0;
            BookPage += vec[i];
        }
    }
    return true;
}

int Bookallocation(vector<int>& vec, int m, int n){
    int ans = -1, s= 0,sum=0;
    if(m>n) return -1;
    for(int i:vec){sum+=i;}
    int e=sum;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isBookAllocate(vec,m,n,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {10,20,30,40};
    cout << Bookallocation(arr,2,arr.size()) << endl;
    return 0;
}