#include<iostream>
using namespace std;

/*
int sumOfArray(int arr[],int size){
	int sum = 0;
	for(int i=0;i<size;i++){
		sum+= arr[i];\
	}
	return sum;
}



int mulOfArray(int arr[],int size){
        int mul = 1;
        for(int i=0;i<size;i++){
                mul*= arr[i];\
        }
        return mul;
}
*/








/*
int maxOfArray(int arr[],int size){
	int index = 0;
	for(int i=0;i<size;i++){
		if(arr[i]>arr[index]){
			index = i;
		}
	}
	return index;
}


int minOfArray(int arr[], int size){
	int index = 0;
	for(int i=1;i<size;i++){
		if(arr[i]<arr[index]){
			index=i;
		}
	}
	return index;
}

void swapminmax(int arr[],int size){
	int largest = maxOfArray(arr,size);
	int smallest = minOfArray(arr,size);
	swap(arr[largest],arr[smallest]);
}
*/



/*
void uniele(int arr[], int size){
	for (int i = 0; i < size; i++){
		bool uni = true;
		for (int j = 0; j < size; j++){
			
			if(i!=j && arr[i]==arr[j]){
				uni = false;
				break;
			}
		}
		if(uni){
			cout << arr[i];
			cout << endl;
		}
	}	
}
*/




void intersection(int arr[], int arr1[], int size1, int size2){
	for(int i = 0; i< size1; i++){
		for(int j =0; j<size2 ; j++){
			if(arr[i]== arr1[j]){
				cout << arr[i]<< endl;
				break;
			}
		}
	}
}










int main(){
	int arr[8]={1,2,3,2,4,5,4,9};
	int size = 8;
	 
	int arr1[4]={3,0,8,1};
	int size1 = 4;
//	cout << sumOfArray(arr,size) << endl;
//	cout << mulOfArray(arr,size) << endl;
//	cout << maxOfArray(arr,size) << endl;
//	cout << minOfArray(arr,size) << endl;

//	for(int i=0;i<size;i++){
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//	swapminmax(arr,size);
//
//	for(int i=0;i<size;i++){
//              cout << arr[i] << " "
//    }

	// uniele(arr,size);

	intersection(arr,arr1,size,size1);

	return 0;
}
