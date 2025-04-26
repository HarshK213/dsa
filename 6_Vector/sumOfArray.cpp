#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr){
    int s = 0, e= arr.size();
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}

vector<int> VectorSum(vector<int>& arr1, vector<int>& arr2){
    int i = arr1.size()-1 , j = arr2.size() , carry = 0;
    vector<int> ans;
    while(i>=0
         && j >= 0){
        int val1 = arr1[i] , val2 = arr2[j] ;
        int sum = val1 + val2 + carry;
        int carry = sum /10;
        int value = sum%10;
        ans.push_back(value);
        i--;
        j--;
    }
    while(i>=0){
        int sum  = arr1[i] + carry;
        int carry = sum /10;
        int value = sum%10;
        ans.push_back(value);
        i--;
    }
    while(j>=0){
        int sum  = arr2[j] + carry;
        int carry = sum /10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    while(carry!=0){
        int sum  =  carry;
        int carry = sum /10;
        int value = sum%10;
        ans.push_back(value);
    }
    reverse(ans);
    return ans;
}

int main(){
    return 0;
}