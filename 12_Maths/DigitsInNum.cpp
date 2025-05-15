#include <iostream>
using namespace std;

int main(){
//	cout << "HELLO WORLD" << endl;

	int n = 3568;
	while(n>0){
		int lastDig = n%10;
		n = n /10;
		cout << lastDig << endl;
	}
	return 0;
}
