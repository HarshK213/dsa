#include <iostream>
using namespace std;

// LINEAR SEARCH ALGORITHM

int linear_search(int arr[],int target,int size){
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[5]={12,53,84,22,42};
	int size = 5;
	int target = 4;
	cout << linear_search(arr,target,size) << endl;

	return 0;
}

