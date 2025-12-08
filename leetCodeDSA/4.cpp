/* Median of two sorted array */
/* tc -> O(log(n+m))*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


// brute force
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    vector<int> num(n1+n2);
    int i = 0, j = 0, idx = 0;
    double ans = 0;

    while(i<n1 && j<n2){
        int fnum = nums1[i], snum = nums2[j];
        if(fnum < snum){
            num[idx++] = fnum;
            i++;
        }else{
            num[idx++] = snum;
            j++;
        }
    }
    while(i<n1){
        num[idx++] = nums1[i++];
    }
    while(j<n2){
        num[idx++] = nums2[j++];
    }

    int mid = (n1+n2-1)/2;
    if((n1+n2)%2 == 0){
        ans = (num[mid] + num[mid+1])/2.0;
    }else{
        ans = num[mid];
    }
    return ans;
}

int main(){
    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    double ans = findMedianSortedArrays(v1,v2);
    cout << ans << endl;
    return 0;
}