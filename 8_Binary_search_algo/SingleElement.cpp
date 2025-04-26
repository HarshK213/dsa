#include <iostream>
#include <vector>
using namespace std;

int searchOne(vector<int>& arr,int st,int end){
    int ans = -1,mid;
    mid = st + (end-st)/2;
    cout << mid << ans << endl;
    if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])return ans;
    cout << "first mid not answer" << endl;
    ans = searchOne(arr,st , mid-1);
    if(ans != -1)return ans;
    ans = searchOne(arr,mid+1,end);
    return ans;
}
int singleNonDuplicate(vector<int>& nums) {
	int ans,n = nums.size();
	if(n==1)ans=nums[0];
	if(nums[0]!=nums[1]) ans = nums[0];
	else if(nums[n-1]!=nums[n-2]) ans = nums[n-1];
	else{
		int st = 1, end = n-2;
		int ans = searchOne(nums,st,end);
	}
	return ans;
}
int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(arr) << endl; 
    return 0;
}
