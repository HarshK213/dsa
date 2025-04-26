#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter any value : ";
	cin >> n;

	for(int i=0;i<n;i++){
	
		for(int j=0;j<i+1;j++){
			cout << "*";
		}
		for(int j=0;j<((n-(2*i))+2);j++){
			cout << " ";
		}
		for(int j=0;j<i+1;j++){
			cout << "*";
		}
		
		cout << endl;

	}

        for(int i=0;i<n;i++){

                for(int j=0;j<n-i;j++){
                        cout << "*";
                }
                for(int j=0;j<(2*i);j++){
                        cout << " ";
                }
                for(int j=0;j<n-i;j++){
                        cout << "*";
                }

                cout << endl;

        }



	return 0;
}

/*
OUTPUT:-

Enter any value : 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
