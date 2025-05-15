#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter any value: ";
	cin >> n;

	// Top Pattern

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";       
		}
	
		
		cout<<"*";


		for(int j=0;j<(2*i)-1;j++){
			cout<<" ";
		}


		if(i!=0){
			cout<<"*";
		}
		cout<<endl;
	}


	// Down Pattern
	
	for(int i= 0;i<n-1;i++){
		
		for(int j=0;j<i+1;j++){
			cout<<" ";
		}
		
		cout<<"*";
	
		for(int j=0;j<(n-1)-(2*i);j++){
			cout<<" ";
		}
		if(i!=n-2){

			cout<<"*";
		}

		cout<<endl;
	}


	return 0;
}

/*
OUTPUT:-

Enter any value: 4
   *
  * *
 *   *
*     *
 *   *
  * *
   *

*/
