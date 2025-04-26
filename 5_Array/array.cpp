/*
Array :-

*/

#include <iostream>
using namespace std;


/*
 	int marks[5]={13,123,42,12,4};
	
	//size(arr)= (sizeof(arr)/sizeof(int))
	
	for(int i=0;i<size(marks);i++){
		cout << marks[i] << endl;
	}
*/

/*
	int size =5;
	int arr[size];

	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
	for(int i=0;i<size;i++){
		cout << arr[i]<< endl;
	}
*/

	// Q. find the smallest and largest value in an array.
int smallest(int *a,int size){
	int smallest = a[1];
	for(int i=1;i<size;i++){
	/*	if(smallest > a[i]){
			smallest = a[i];
		}
		
		OR

	*/
		smallest=min(a[i],smallest);

	}
		return smallest;
}

int largest(int *a, int size){
	int largest = a[1];
	for(int i=1;i<size;i++){
	/*	if(largest<a[i]){
			largest = a[i];
		}
			
		OR
	*/

		largest = max(a[i],largest);
	}

	return largest;
}
	int main(){
	int arr[5]={13,5,83,28,19};
	int size= sizeof(arr)/sizeof(int);
	cout << "Smallest in Array : " << smallest(arr,size) << endl;
	cout << "Largest in Array : " << largest(arr,size) << endl;
		return 0;
}




	


