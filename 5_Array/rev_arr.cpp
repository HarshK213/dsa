// Here, we will reverse an array using two pointers approach

#include <iostream>
using namespace std;
/*
void rev_arr(int arr[],int size){
	for(int i=0;i<(size/2);i++){
		swap(arr[i],arr[size-i-1]);
	}
}
*/



//	OR

// when we have to reverse the whole array
void rev_arr(int arr[],int size){
	int start = 0;
	int end = size-1;

	while(start < end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}



// when we have to reverse the array after any index
void rev_arr_2(int arr[], int index, int size){
	int s = index + 1 , e = size-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}


int main(){
	int arr[7]={4,2,8,7,1,2,5};
	int size = 7;
	rev_arr_2(arr,1,size);
	for(int i=0;i<size;i++){
		cout << arr[i] << "|";
	}
	return 0;
}
